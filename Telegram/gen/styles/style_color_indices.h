// WARNING! All changes made in this file will be lost!
// Created from 'color_indices.style' by 'codegen_style'
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

void init_style_color_indices(int scale);

} // namespace internal
} // namespace style

namespace st {
constexpr int colorIndexRed = 0;
constexpr int colorIndexOrange = 1;
constexpr int colorIndexGreen = 2;
constexpr int colorIndexSea = 3;
constexpr int colorIndexBlue = 4;
constexpr int colorIndexPurple = 5;
constexpr int colorIndexPink = 6;
constexpr int colorIndexYellow = 7;
} // namespace st
