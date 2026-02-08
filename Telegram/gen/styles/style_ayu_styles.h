// WARNING! All changes made in this file will be lost!
// Created from 'ayu_styles.style' by 'codegen_style'
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

void init_style_ayu_styles(int scale);

} // namespace internal

struct IconButton;
struct Toast;

} // namespace style

namespace st {
extern const int &cpPadding;
extern const int &cpSelectedPadding;
extern const int &cpSelectedRounding;
extern const int &cpImagePadding;
extern const int &cpSpacingX;
extern const int &cpSpacingY;
extern const int &cpIconSize;
extern const style::margins &recentStickersLimitPadding;
extern const style::margins &imageViewPadding;
extern const style::margins &imageViewInnerPadding;
extern const int &botWebViewPanelHeightIncreased;
extern const int &botWebViewPanelWidthIncreased;
extern const int &stickerRoundingSize;
extern const int &messageShotPadding;
extern const style::IconButton &topBarAdmins;
extern const style::IconButton &topBarRecentActions;
extern const style::Toast &exteraBadgeToast;
extern const int &supportLogoSize;
extern const int &unreadPillPadding;
} // namespace st
