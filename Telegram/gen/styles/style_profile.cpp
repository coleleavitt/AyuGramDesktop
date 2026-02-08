// WARNING! All changes made in this file will be lost!
// Created from 'profile.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#include "style_profile.h"

#include "styles/palette.h"
#include "styles/style_basic.h"
#include "styles/style_widgets.h"
#include "styles/style_layers.h"
#include "styles/style_intro.h"
#include "styles/style_boxes.h"
#include "styles/style_dialogs.h"
#include "styles/style_menu_icons.h"
#include "styles/style_premium.h"
#include "styles/style_chat_helpers.h"
#include "styles/style_chat.h"
#include "styles/style_info.h"

namespace {

bool inited = false;

class Module_style_profile : public style::internal::ModuleBase {
public:
	Module_style_profile() { style::internal::registerModule(this); }

	void start(int scale) override {
		style::internal::init_style_profile(scale);
	}
};
Module_style_profile registrator;

style::color _profileBg = { Qt::Uninitialized };
int _profileTopBarHeight = 0;
style::color _profileDropAreaBg = { Qt::Uninitialized };
style::color _profileDropAreaFg = { Qt::Uninitialized };
style::margins _profileDropAreaPadding = { 0, 0, 0, 0 };
style::font _profileDropAreaTitleFont = { Qt::Uninitialized };
int _profileDropAreaTitleTop = 0;
style::font _profileDropAreaSubtitleFont = { Qt::Uninitialized };
int _profileDropAreaSubtitleTop = 0;
style::color _profileDropAreaBorderFg = { Qt::Uninitialized };
int _profileDropAreaBorderWidth = 0;
int _profileBlockMarginTop = 0;
int _profileBlockTitleHeight = 0;
style::font _profileBlockTitleFont = { Qt::Uninitialized };
style::color _profileBlockTitleFg = { Qt::Uninitialized };
style::point _profileBlockTitlePosition = { 0, 0 };
style::FlatLabel _profileBlockTextPart = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::FlatLabel _profileBlockOneLineTextPart = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::color _profileMemberNameFg = { Qt::Uninitialized };

} // namespace

namespace st {
const style::color &profileBg(_profileBg);
const int &profileTopBarHeight(_profileTopBarHeight);
const style::color &profileDropAreaBg(_profileDropAreaBg);
const style::color &profileDropAreaFg(_profileDropAreaFg);
const style::margins &profileDropAreaPadding(_profileDropAreaPadding);
const style::font &profileDropAreaTitleFont(_profileDropAreaTitleFont);
const int &profileDropAreaTitleTop(_profileDropAreaTitleTop);
const style::font &profileDropAreaSubtitleFont(_profileDropAreaSubtitleFont);
const int &profileDropAreaSubtitleTop(_profileDropAreaSubtitleTop);
const style::color &profileDropAreaBorderFg(_profileDropAreaBorderFg);
const int &profileDropAreaBorderWidth(_profileDropAreaBorderWidth);
const int &profileBlockMarginTop(_profileBlockMarginTop);
const int &profileBlockTitleHeight(_profileBlockTitleHeight);
const style::font &profileBlockTitleFont(_profileBlockTitleFont);
const style::color &profileBlockTitleFg(_profileBlockTitleFg);
const style::point &profileBlockTitlePosition(_profileBlockTitlePosition);
const style::FlatLabel &profileBlockTextPart(_profileBlockTextPart);
const style::FlatLabel &profileBlockOneLineTextPart(_profileBlockOneLineTextPart);
const style::color &profileMemberNameFg(_profileMemberNameFg);
} // namespace st

namespace style {
namespace internal {

namespace {
int px0 = 0;
int px3 = 3;
int px5 = 5;
int px14 = 14;
int px16 = 16;
int px20 = 20;
int px24 = 24;
int px25 = 25;
int px30 = 30;
int px68 = 68;
int px180 = 180;
void initPxValues(int scale) {
	px0 = ConvertScale(0, scale);
	px3 = ConvertScale(3, scale);
	px5 = ConvertScale(5, scale);
	px14 = ConvertScale(14, scale);
	px16 = ConvertScale(16, scale);
	px20 = ConvertScale(20, scale);
	px24 = ConvertScale(24, scale);
	px25 = ConvertScale(25, scale);
	px30 = ConvertScale(30, scale);
	px68 = ConvertScale(68, scale);
	px180 = ConvertScale(180, scale);
}

} // namespace

void init_style_profile(int scale) {
	if (inited) return;
	inited = true;

	init_style_basic(scale);
	init_style_widgets(scale);
	init_style_info(scale);

	initPxValues(scale);

	_profileBg = st::windowBg;
	_profileTopBarHeight = st::topBarHeight;
	_profileDropAreaBg = st::profileBg;
	_profileDropAreaFg = st::lightButtonFg;
	_profileDropAreaPadding = { px25, px3, px25, px20 };
	_profileDropAreaTitleFont = { px24, FontFlags::from_raw(0), 0 };
	_profileDropAreaTitleTop = px30;
	_profileDropAreaSubtitleFont = { px16, FontFlags::from_raw(0), 0 };
	_profileDropAreaSubtitleTop = px68;
	_profileDropAreaBorderFg = st::profileDropAreaFg;
	_profileDropAreaBorderWidth = px3;
	_profileBlockMarginTop = px14;
	_profileBlockTitleHeight = px24;
	_profileBlockTitleFont = { px14, FontFlags::from_raw(16), 0 };
	_profileBlockTitleFg = st::windowBoldFg;
	_profileBlockTitlePosition = { px24, px0 };
	_profileBlockTextPart = { { px5, px5, px5, px5 }, px180, style::al_left, st::windowFg, px0, st::defaultTextStyle, st::defaultTextPalette };
	_profileBlockOneLineTextPart = { { px5, px5, px5, px5 }, px0, style::al_left, st::windowFg, px20, st::defaultTextStyle, st::defaultTextPalette };
	_profileMemberNameFg = st::windowBoldFg;
}

} // namespace internal
} // namespace style
