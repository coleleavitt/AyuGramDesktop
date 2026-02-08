// WARNING! All changes made in this file will be lost!
// Created from 'iv.style' by 'codegen_style'
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

void init_style_iv(int scale);

} // namespace internal

struct IconButton;
struct TextStyle;
struct RoundButton;
struct FlatLabel;

} // namespace style

namespace st {
extern const style::IconButton &ivMenuToggle;
extern const style::point &ivMenuPosition;
extern const style::icon &ivBackIcon;
extern const style::IconButton &ivBack;
extern const int &ivZoomButtonsSize;
extern const style::IconButton &ivPlusMinusZoom;
extern const style::TextStyle &ivResetZoomStyle;
extern const style::RoundButton &ivResetZoom;
extern const style::FlatLabel &ivResetZoomLabel;
extern const int &ivResetZoomInnerPadding;
extern const style::icon &ivBackIconDisabled;
extern const style::icon &ivForwardIcon;
extern const style::IconButton &ivForward;
extern const style::font &ivSubtitleFont;
extern const style::FlatLabel &ivSubtitle;
extern const int &ivSubtitleHeight;
extern const int &ivSubtitleTop;
extern const int &ivSubtitleLeft;
extern const int &ivSubtitleSkip;
} // namespace st
