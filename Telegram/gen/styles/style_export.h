// WARNING! All changes made in this file will be lost!
// Created from 'export.style' by 'codegen_style'
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

void init_style_export(int scale);

} // namespace internal

struct FlatLabel;
struct MediaSlider;
struct LabelSimple;
struct RoundButton;
struct CalendarSizes;

} // namespace style

namespace st {
extern const style::size &exportPanelSize;
extern const style::margins &exportSettingPadding;
extern const style::margins &exportSubSettingPadding;
extern const style::FlatLabel &exportHeaderLabel;
extern const style::margins &exportHeaderPadding;
extern const style::MediaSlider &exportFileSizeSlider;
extern const style::LabelSimple &exportFileSizeLabel;
extern const style::margins &exportFileSizePadding;
extern const int &exportFileSizeLabelBottom;
extern const style::FlatLabel &exportLocationLabel;
extern const style::margins &exportLocationPadding;
extern const style::margins &exportLimitsPadding;
extern const style::FlatLabel &exportAboutOptionLabel;
extern const style::margins &exportAboutOptionPadding;
extern const style::FlatLabel &exportErrorLabel;
constexpr int exportProgressDuration = 200;
extern const int &exportProgressRowHeight;
extern const style::margins &exportProgressRowPadding;
extern const int &exportProgressRowSkip;
extern const style::FlatLabel &exportProgressLabel;
extern const style::FlatLabel &exportProgressInfoLabel;
extern const int &exportProgressWidth;
extern const style::color &exportProgressFg;
extern const style::color &exportProgressBg;
extern const style::RoundButton &exportCancelButton;
extern const int &exportCancelBottom;
extern const style::RoundButton &exportDoneButton;
extern const style::FlatLabel &exportAboutLabel;
extern const style::margins &exportAboutPadding;
extern const style::FlatLabel &exportTopBarLabel;
extern const style::CalendarSizes &exportCalendarSizes;
} // namespace st
