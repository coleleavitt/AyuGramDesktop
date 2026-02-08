// WARNING! All changes made in this file will be lost!
// Created from 'ayu_settings.style' by 'codegen_style'
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

void init_style_ayu_settings(int scale);

} // namespace internal

struct TextStyle;
struct FlatLabel;
struct IconButton;

} // namespace style

namespace st {
extern const style::TextStyle &centeredBoxLabelStyle;
extern const style::FlatLabel &centeredBoxLabel;
extern const style::IconButton &filtersAddIcon;
extern const style::IconButton &filtersExcludeIcon;
} // namespace st
