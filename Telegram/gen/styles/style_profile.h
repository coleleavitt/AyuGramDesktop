// WARNING! All changes made in this file will be lost!
// Created from 'profile.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "ui/style/style_core.h"

namespace style {
namespace internal {

void init_style_profile(int scale);

} // namespace internal

struct FlatLabel;

} // namespace style

namespace st {
extern const style::color &profileBg;
extern const int &profileTopBarHeight;
extern const style::color &profileDropAreaBg;
extern const style::color &profileDropAreaFg;
extern const style::margins &profileDropAreaPadding;
extern const style::font &profileDropAreaTitleFont;
extern const int &profileDropAreaTitleTop;
extern const style::font &profileDropAreaSubtitleFont;
extern const int &profileDropAreaSubtitleTop;
extern const style::color &profileDropAreaBorderFg;
extern const int &profileDropAreaBorderWidth;
constexpr int profileDropAreaDuration = 200;
extern const int &profileBlockMarginTop;
extern const int &profileBlockTitleHeight;
extern const style::font &profileBlockTitleFont;
extern const style::color &profileBlockTitleFg;
extern const style::point &profileBlockTitlePosition;
extern const style::FlatLabel &profileBlockTextPart;
extern const style::FlatLabel &profileBlockOneLineTextPart;
extern const style::color &profileMemberNameFg;
} // namespace st
