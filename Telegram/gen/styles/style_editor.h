// WARNING! All changes made in this file will be lost!
// Created from 'editor.style' by 'codegen_style'
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

void init_style_editor(int scale);

} // namespace internal

struct TextStyle;
struct FlatLabel;
struct IconButton;

} // namespace style

namespace st {
extern const int &photoEditorControlsHeight;
extern const int &photoEditorControlsBottomSkip;
extern const int &photoEditorControlsCenterSkip;
extern const style::margins &photoEditorContentMargins;
constexpr int photoEditorBarAnimationDuration = 200;
extern const style::color &photoEditorButtonIconFg;
extern const style::color &photoEditorButtonIconFgOver;
extern const style::color &photoEditorButtonIconFgActive;
extern const style::color &photoEditorButtonIconFgInactive;
extern const int &photoEditorButtonBarHeight;
extern const int &photoEditorButtonBarWidth;
extern const style::margins &photoEditorButtonBarPadding;
extern const style::margins &photoEditorTextButtonPadding;
extern const style::TextStyle &photoEditorButtonStyle;
extern const int &photoEditorButtonTextTop;
extern const style::FlatLabel &photoEditorAbout;
extern const style::margins &photoEditorAboutMargin;
extern const style::IconButton &photoEditorRotateButton;
extern const style::IconButton &photoEditorFlipButton;
extern const style::icon &photoEditorFlipIconActive;
extern const style::IconButton &photoEditorPaintModeButton;
extern const style::icon &photoEditorPaintIconActive;
extern const style::IconButton &photoEditorUndoButton;
extern const style::IconButton &photoEditorRedoButton;
extern const style::IconButton &photoEditorStickersButton;
extern const style::icon &photoEditorStickersIconActive;
extern const style::icon &photoEditorUndoButtonInactive;
extern const style::icon &photoEditorRedoButtonInactive;
extern const int &photoEditorColorPickerWidth;
extern const int &photoEditorColorPickerLineHeight;
extern const int &photoEditorColorPickerCanvasHeight;
extern const int &photoEditorColorPickerCircleSize;
extern const int &photoEditorColorPickerCircleBigSize;
extern const int &photoEditorColorPickerCircleSkip;
extern const int &photoEditorCropPointSize;
extern const int &photoEditorCropMinSize;
extern const int &photoEditorItemHandleSize;
} // namespace st
