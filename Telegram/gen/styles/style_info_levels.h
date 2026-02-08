// WARNING! All changes made in this file will be lost!
// Created from 'info_levels.style' by 'codegen_style'
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

void init_style_info_levels(int scale);

} // namespace internal

struct TextStyle;

struct LevelShape {
	style::icon icon;
	style::point position;
};

} // namespace style

namespace st {
extern const style::TextStyle &levelStyle;
extern const style::color &levelTextFg;
extern const style::margins &levelMargin;
extern const style::LevelShape &levelBase;
extern const style::LevelShape &level1;
extern const style::LevelShape &level2;
extern const style::LevelShape &level3;
extern const style::LevelShape &level4;
extern const style::LevelShape &level5;
extern const style::LevelShape &level6;
extern const style::LevelShape &level7;
extern const style::LevelShape &level8;
extern const style::LevelShape &level9;
extern const style::LevelShape &level10;
extern const style::LevelShape &level20;
extern const style::LevelShape &level30;
extern const style::LevelShape &level40;
extern const style::LevelShape &level50;
extern const style::LevelShape &level60;
extern const style::LevelShape &level70;
extern const style::LevelShape &level80;
extern const style::LevelShape &level90;
extern const style::LevelShape &levelNegative;
extern const style::icon &levelNegativeBubble;
} // namespace st
