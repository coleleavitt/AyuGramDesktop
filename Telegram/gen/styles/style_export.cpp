// WARNING! All changes made in this file will be lost!
// Created from 'export.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#include "style_export.h"

#include "styles/palette.h"
#include "styles/style_basic.h"
#include "styles/style_widgets.h"
#include "styles/style_layers.h"
#include "styles/style_intro.h"
#include "styles/style_boxes.h"

namespace {

bool inited = false;

class Module_style_export : public style::internal::ModuleBase {
public:
	Module_style_export() { style::internal::registerModule(this); }

	void start(int scale) override {
		style::internal::init_style_export(scale);
	}
};
Module_style_export registrator;

style::size _exportPanelSize = { 0, 0 };
style::margins _exportSettingPadding = { 0, 0, 0, 0 };
style::margins _exportSubSettingPadding = { 0, 0, 0, 0 };
style::FlatLabel _exportHeaderLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::margins _exportHeaderPadding = { 0, 0, 0, 0 };
style::MediaSlider _exportFileSizeSlider = { 0, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { 0, 0 }, 0 };
style::LabelSimple _exportFileSizeLabel = { { Qt::Uninitialized }, 0, { Qt::Uninitialized } };
style::margins _exportFileSizePadding = { 0, 0, 0, 0 };
int _exportFileSizeLabelBottom = 0;
style::FlatLabel _exportLocationLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::margins _exportLocationPadding = { 0, 0, 0, 0 };
style::margins _exportLimitsPadding = { 0, 0, 0, 0 };
style::FlatLabel _exportAboutOptionLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::margins _exportAboutOptionPadding = { 0, 0, 0, 0 };
style::FlatLabel _exportErrorLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
int _exportProgressRowHeight = 0;
style::margins _exportProgressRowPadding = { 0, 0, 0, 0 };
int _exportProgressRowSkip = 0;
style::FlatLabel _exportProgressLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::FlatLabel _exportProgressInfoLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
int _exportProgressWidth = 0;
style::color _exportProgressFg = { Qt::Uninitialized };
style::color _exportProgressBg = { Qt::Uninitialized };
style::RoundButton _exportCancelButton = { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, 0, 0, 0, 0, { 0, 0, 0, 0 }, 0, { Qt::Uninitialized }, { Qt::Uninitialized }, { 0, 0 }, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, 0, 0 } };
int _exportCancelBottom = 0;
style::RoundButton _exportDoneButton = { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, 0, 0, 0, 0, { 0, 0, 0, 0 }, 0, { Qt::Uninitialized }, { Qt::Uninitialized }, { 0, 0 }, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, 0, 0 } };
style::FlatLabel _exportAboutLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::margins _exportAboutPadding = { 0, 0, 0, 0 };
style::FlatLabel _exportTopBarLabel = { { 0, 0, 0, 0 }, 0, style::al_topleft, { Qt::Uninitialized }, 0, { { Qt::Uninitialized }, 0, 0, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false }, { { 0, 0, 0, 0 }, 0, 0, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, { Qt::Uninitialized }, { 0, 0 }, 0, 0, 0, false } }, { { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, { Qt::Uninitialized }, false } };
style::CalendarSizes _exportCalendarSizes = { 0, 0, { 0, 0 }, 0, { 0, 0, 0, 0 } };

} // namespace

namespace st {
const style::size &exportPanelSize(_exportPanelSize);
const style::margins &exportSettingPadding(_exportSettingPadding);
const style::margins &exportSubSettingPadding(_exportSubSettingPadding);
const style::FlatLabel &exportHeaderLabel(_exportHeaderLabel);
const style::margins &exportHeaderPadding(_exportHeaderPadding);
const style::MediaSlider &exportFileSizeSlider(_exportFileSizeSlider);
const style::LabelSimple &exportFileSizeLabel(_exportFileSizeLabel);
const style::margins &exportFileSizePadding(_exportFileSizePadding);
const int &exportFileSizeLabelBottom(_exportFileSizeLabelBottom);
const style::FlatLabel &exportLocationLabel(_exportLocationLabel);
const style::margins &exportLocationPadding(_exportLocationPadding);
const style::margins &exportLimitsPadding(_exportLimitsPadding);
const style::FlatLabel &exportAboutOptionLabel(_exportAboutOptionLabel);
const style::margins &exportAboutOptionPadding(_exportAboutOptionPadding);
const style::FlatLabel &exportErrorLabel(_exportErrorLabel);
const int &exportProgressRowHeight(_exportProgressRowHeight);
const style::margins &exportProgressRowPadding(_exportProgressRowPadding);
const int &exportProgressRowSkip(_exportProgressRowSkip);
const style::FlatLabel &exportProgressLabel(_exportProgressLabel);
const style::FlatLabel &exportProgressInfoLabel(_exportProgressInfoLabel);
const int &exportProgressWidth(_exportProgressWidth);
const style::color &exportProgressFg(_exportProgressFg);
const style::color &exportProgressBg(_exportProgressBg);
const style::RoundButton &exportCancelButton(_exportCancelButton);
const int &exportCancelBottom(_exportCancelBottom);
const style::RoundButton &exportDoneButton(_exportDoneButton);
const style::FlatLabel &exportAboutLabel(_exportAboutLabel);
const style::margins &exportAboutPadding(_exportAboutPadding);
const style::FlatLabel &exportTopBarLabel(_exportTopBarLabel);
const style::CalendarSizes &exportCalendarSizes(_exportCalendarSizes);
} // namespace st

namespace style {
namespace internal {

namespace {
int px0 = 0;
int px3 = 3;
int px4 = 4;
int px7 = 7;
int px8 = 8;
int px9 = 9;
int px10 = 10;
int px12 = 12;
int px14 = 14;
int px15 = 15;
int px16 = 16;
int px18 = 18;
int px20 = 20;
int px21 = 21;
int px22 = 22;
int px24 = 24;
int px30 = 30;
int px32 = 32;
int px38 = 38;
int px40 = 40;
int px42 = 42;
int px44 = 44;
int px56 = 56;
int px175 = 175;
int px200 = 200;
int px256 = 256;
int px320 = 320;
int px364 = 364;
int px480 = 480;
void initPxValues(int scale) {
	px0 = ConvertScale(0, scale);
	px3 = ConvertScale(3, scale);
	px4 = ConvertScale(4, scale);
	px7 = ConvertScale(7, scale);
	px8 = ConvertScale(8, scale);
	px9 = ConvertScale(9, scale);
	px10 = ConvertScale(10, scale);
	px12 = ConvertScale(12, scale);
	px14 = ConvertScale(14, scale);
	px15 = ConvertScale(15, scale);
	px16 = ConvertScale(16, scale);
	px18 = ConvertScale(18, scale);
	px20 = ConvertScale(20, scale);
	px21 = ConvertScale(21, scale);
	px22 = ConvertScale(22, scale);
	px24 = ConvertScale(24, scale);
	px30 = ConvertScale(30, scale);
	px32 = ConvertScale(32, scale);
	px38 = ConvertScale(38, scale);
	px40 = ConvertScale(40, scale);
	px42 = ConvertScale(42, scale);
	px44 = ConvertScale(44, scale);
	px56 = ConvertScale(56, scale);
	px175 = ConvertScale(175, scale);
	px200 = ConvertScale(200, scale);
	px256 = ConvertScale(256, scale);
	px320 = ConvertScale(320, scale);
	px364 = ConvertScale(364, scale);
	px480 = ConvertScale(480, scale);
}

} // namespace

void init_style_export(int scale) {
	if (inited) return;
	inited = true;

	init_style_basic(scale);
	init_style_widgets(scale);
	init_style_boxes(scale);

	initPxValues(scale);

	_exportPanelSize = { px364, px480 };
	_exportSettingPadding = { px22, px8, px22, px8 };
	_exportSubSettingPadding = { px56, px4, px22, px12 };
	_exportHeaderLabel = { { px0, px0, px0, px0 }, px0, style::al_left, st::boxTitleFg, px24, { { px15, FontFlags::from_raw(16), 0 }, st::kLinkUnderlineActive, px0, st::defaultQuoteStyle, st::defaultQuoteStyle }, st::defaultTextPalette };
	_exportHeaderPadding = { px22, px20, px22, px9 };
	_exportFileSizeSlider = { px3, st::mediaPlayerActiveFg, st::mediaPlayerInactiveFg, st::mediaPlayerActiveFg, st::mediaPlayerInactiveFg, st::mediaPlayerInactiveFg, st::windowBg, st::mediaPlayerInactiveFg, { px15, px15 }, 135 };
	_exportFileSizeLabel = { st::boxTextFont, px0, st::windowFg };
	_exportFileSizePadding = { px22, px8, px22, px8 };
	_exportFileSizeLabelBottom = px18;
	_exportLocationLabel = { { px0, px0, px0, px0 }, px256, style::al_topleft, st::windowFg, px21, st::boxLabelStyle, st::defaultTextPalette };
	_exportLocationPadding = { px22, px8, px22, px8 };
	_exportLimitsPadding = { px22, px0, px22, px0 };
	_exportAboutOptionLabel = { { px0, px0, px0, px0 }, px175, style::al_left, st::windowSubTextFg, px0, st::defaultTextStyle, st::defaultTextPalette };
	_exportAboutOptionPadding = { px22, px0, px22, px16 };
	_exportErrorLabel = { { px0, px0, px0, px0 }, px175, style::al_top, st::boxTextFgError, px0, st::boxLabelStyle, st::defaultTextPalette };
	_exportProgressRowHeight = px30;
	_exportProgressRowPadding = { px22, px10, px22, px10 };
	_exportProgressRowSkip = px10;
	_exportProgressLabel = { { px0, px0, px0, px0 }, px256, style::al_topleft, st::windowBoldFg, px20, { { px14, FontFlags::from_raw(16), 0 }, st::kLinkUnderlineActive, px0, st::defaultQuoteStyle, st::defaultQuoteStyle }, st::defaultTextPalette };
	_exportProgressInfoLabel = { { px0, px0, px0, px0 }, px256, style::al_topleft, st::windowSubTextFg, px20, st::boxTextStyle, st::defaultTextPalette };
	_exportProgressWidth = px3;
	_exportProgressFg = st::mediaPlayerActiveFg;
	_exportProgressBg = st::mediaPlayerInactiveFg;
	_exportCancelButton = { st::attentionButtonFg, st::attentionButtonFgOver, st::lightButtonBg, st::attentionButtonBgOver, st::lightButtonFg, st::lightButtonFgOver, px7, px200, px44, px0, { px0, px0, px0, px0 }, px12, { std::in_place }, { std::in_place }, { px0, px0 }, { { px15, FontFlags::from_raw(16), 0 }, st::kLinkUnderlineActive, px0, st::defaultQuoteStyle, st::defaultQuoteStyle }, { st::attentionButtonBgRipple, 550, 170 } };
	_exportCancelBottom = px30;
	_exportDoneButton = { st::activeButtonFg, st::activeButtonFgOver, st::activeButtonBg, st::activeButtonBgOver, st::activeButtonSecondaryFg, st::activeButtonSecondaryFgOver, px7, px200, px44, px0, { px0, px0, px0, px0 }, px12, { std::in_place }, { std::in_place }, { px0, px0 }, { { px15, FontFlags::from_raw(16), 0 }, st::kLinkUnderlineActive, px0, st::defaultQuoteStyle, st::defaultQuoteStyle }, { st::activeButtonBgRipple, 550, 170 } };
	_exportAboutLabel = { { px0, px0, px0, px0 }, px256, style::al_topleft, st::windowSubTextFg, px0, st::boxLabelStyle, st::defaultTextPalette };
	_exportAboutPadding = { px22, px10, px22, px0 };
	_exportTopBarLabel = { { px0, px0, px0, px0 }, px0, style::al_left, st::windowFg, px20, st::defaultTextStyle, { st::windowSubTextFg, st::msgInMonoFg, st::msgInDateFg, st::msgInBgSelected, st::transparent, st::historyLinkInFgSelected, st::msgInMonoFgSelected, st::msgInDateFgSelected, st::msgSelectOverlay, false } };
	_exportCalendarSizes = { px320, px40, { px42, px38 }, px32, { px14, px0, px14, px0 } };
}

} // namespace internal
} // namespace style
