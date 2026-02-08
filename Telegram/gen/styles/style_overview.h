// WARNING! All changes made in this file will be lost!
// Created from 'overview.style' by 'codegen_style'
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

void init_style_overview(int scale);

} // namespace internal

struct RoundCheckbox;

struct OverviewFileLayout {
	int maxWidth;
	style::margins songPadding;
	int songThumbSize;
	int songNameTop;
	int songStatusTop;
	style::color songIconBg;
	style::color songOverBg;
	style::icon songPause;
	style::icon songPauseSelected;
	style::icon songPlay;
	style::icon songPlaySelected;
	style::icon songCancel;
	style::icon songCancelSelected;
	style::icon songDownload;
	style::icon songDownloadSelected;
	style::icon voicePause;
	style::icon voicePauseSelected;
	style::icon voicePlay;
	style::icon voicePlaySelected;
	style::icon voiceCancel;
	style::icon voiceCancelSelected;
	style::icon voiceDownload;
	style::icon voiceDownloadSelected;
	style::margins filePadding;
	int fileThumbSize;
	int fileNameTop;
	int fileStatusTop;
	int fileDateTop;
};

} // namespace style

namespace st {
constexpr double overviewCheckPressedSize = 0.8;
extern const style::RoundCheckbox &overviewCheck;
extern const style::RoundCheckbox &overviewSmallCheck;
extern const int &overviewCheckSkip;
extern const style::color &overviewPhotoBg;
extern const int &overviewPhotoMinSize;
extern const style::color &overviewVideoBg;
extern const style::color &overviewFileThumbBg;
extern const int &overviewFileExtPadding;
extern const int &overviewFileExtTop;
extern const style::color &overviewFileExtFg;
extern const style::font &overviewFileExtFont;
extern const style::icon &overviewVoicePause;
extern const style::icon &overviewVoicePauseSelected;
extern const style::icon &overviewVoicePlay;
extern const style::icon &overviewVoicePlaySelected;
extern const style::icon &overviewVoiceCancel;
extern const style::icon &overviewVoiceCancelSelected;
extern const style::icon &overviewVoiceDownload;
extern const style::icon &overviewVoiceDownloadSelected;
extern const style::icon &overviewSongPause;
extern const style::icon &overviewSongPauseSelected;
extern const style::icon &overviewSongPlay;
extern const style::icon &overviewSongPlaySelected;
extern const style::icon &overviewSongCancel;
extern const style::icon &overviewSongCancelSelected;
extern const style::icon &overviewSongDownload;
extern const style::icon &overviewSongDownloadSelected;
extern const style::icon &overviewSmallCancel;
extern const style::icon &overviewSmallCancelSelected;
extern const style::icon &overviewSmallDownload;
extern const style::icon &overviewSmallDownloadSelected;
extern const style::OverviewFileLayout &overviewFileLayout;
extern const int &linksMaxWidth;
extern const style::color &linksLetterFg;
extern const style::font &linksLetterFont;
extern const style::margins &linksMargin;
extern const style::color &linksTextFg;
extern const int &linksTextTop;
extern const int &linksBorder;
extern const style::color &linksBorderFg;
extern const int &linksPhotoSize;
extern const int &linksPhotoPadding;
extern const int &overviewVideoStatusMargin;
extern const style::point &overviewVideoStatusPadding;
extern const int &overviewVideoStatusRadius;
extern const style::icon &overviewVideoPlay;
extern const style::icon &overviewVideoPlaySelected;
extern const style::icon &overviewVideoDownload;
extern const style::icon &overviewVideoDownloadSelected;
extern const int &overviewVideoRadialSize;
extern const style::icon &storyPinnedIcon;
extern const style::icon &storyPinnedIconSelected;
} // namespace st
