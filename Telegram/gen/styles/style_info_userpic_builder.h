// WARNING! All changes made in this file will be lost!
// Created from 'info_userpic_builder.style' by 'codegen_style'
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

void init_style_info_userpic_builder(int scale);

} // namespace internal

struct FlatLabel;
struct RoundButton;
struct IconButton;

} // namespace style

namespace st {
extern const style::margins &userpicBuilderEmojiPreviewPadding;
extern const style::FlatLabel &userpicBuilderEmojiSubtitle;
extern const style::margins &userpicBuilderEmojiSubtitlePadding;
extern const int &userpicBuilderEmojiBubblePaletteWidth;
extern const style::margins &userpicBuilderEmojiBubblePalettePadding;
extern const int &userpicBuilderEmojiSelectorLeft;
extern const style::RoundButton &userpicBuilderEmojiButton;
extern const style::IconButton &userpicBuilderEmojiBackButton;
extern const style::point &userpicBuilderEmojiBackPosiiton;
extern const style::point &userpicBuilderEmojiSavePosiiton;
extern const int &userpicBuilderEmojiAccentColorSize;
extern const style::margins &userpicBuilderEmojiBubblePadding;
extern const int &userpicBuilderEmojiLayerMinHeight;
extern const int &userpicBuilderEmojiSelectorMinHeight;
extern const style::point &userpicBuilderEmojiSelectorTogglePosition;
extern const style::IconButton &userpicBuilderEmojiColorMinus;
extern const style::IconButton &userpicBuilderEmojiColorPlus;
extern const style::icon &userpicBuilderEmojiToggleStickersIcon;
} // namespace st
