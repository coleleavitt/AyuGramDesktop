// WARNING! All changes made in this file will be lost!
// Created from 'media_player.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "ui/style/style_core.h"

#include "styles/style_widgets.h"
#include "styles/style_basic.h"

namespace style {
namespace internal {

void init_style_media_player(int scale);

} // namespace internal

struct FlatLabel;
struct LabelSimple;
struct IconButton;
struct DropdownMenu;
struct Menu;
struct FilledSlider;
struct MediaSlider;
struct ScrollArea;
struct OverviewFileLayout;

struct MediaPlayerButton {
	style::point playPosition;
	style::size playOuter;
	style::point pausePosition;
	style::size pauseOuter;
	int pauseStroke;
	style::point cancelPosition;
	style::size cancelOuter;
	int cancelStroke;
	style::point rippleAreaPosition;
	int rippleAreaSize;
	style::RippleAnimation ripple;
	int duration;
};

struct MediaSpeedMenu {
	style::DropdownMenu dropdown;
	style::Menu qualityMenu;
	style::icon activeCheck;
	int activeCheckSkip;
	style::TextStyle sliderStyle;
	style::margins sliderPadding;
	int sliderWidth;
	style::MediaSlider slider;
	style::icon slow;
	style::icon slowActive;
	style::icon normal;
	style::icon normalActive;
	style::icon medium;
	style::icon mediumActive;
	style::icon fast;
	style::icon fastActive;
	style::icon veryFast;
	style::icon veryFastActive;
	style::icon superFast;
	style::icon superFastActive;
};

struct MediaSpeedButton {
	style::size size;
	style::margins padding;
	style::font font;
	style::color fg;
	style::color overFg;
	style::color activeFg;
	style::icon icon;
	style::RippleAnimation ripple;
	style::color rippleActiveColor;
	int rippleRadius;
	style::MediaSpeedMenu menu;
	style::align menuAlign;
};

} // namespace style

namespace st {
extern const style::MediaPlayerButton &mediaPlayerButton;
extern const int &mediaPlayerWideWidth;
extern const int &mediaPlayerHeight;
extern const int &mediaPlayerPadding;
extern const int &mediaPlayerNameTop;
extern const int &mediaPlayerPlayLeft;
extern const int &mediaPlayerPlaySkip;
extern const int &mediaPlayerPlayTop;
extern const int &mediaPlayerCloseRight;
extern const style::FlatLabel &mediaPlayerName;
extern const style::LabelSimple &mediaPlayerTime;
extern const style::IconButton &mediaPlayerRepeatButton;
extern const style::icon &mediaPlayerRepeatDisabledIcon;
extern const style::icon &mediaPlayerRepeatDisabledIconOver;
extern const style::icon &mediaPlayerRepeatOneIcon;
extern const style::icon &mediaPlayerReverseIcon;
extern const style::icon &mediaPlayerReverseDisabledIcon;
extern const style::icon &mediaPlayerReverseDisabledIconOver;
extern const style::icon &mediaPlayerShuffleIcon;
extern const style::IconButton &mediaPlayerOrderButton;
extern const style::color &mediaPlayerRepeatDisabledRippleBg;
extern const style::IconButton &mediaPlayerPlayButton;
extern const style::icon &mediaPlayerPauseIcon;
extern const style::icon &mediaPlayerCancelIcon;
extern const style::DropdownMenu &mediaPlayerMenu;
extern const style::icon &mediaPlayerMenuCheck;
extern const style::Menu &mediaPlayerSpeedMenuInner;
extern const style::MediaSpeedMenu &mediaPlayerSpeedMenu;
extern const style::MediaSpeedButton &mediaPlayerSpeedButton;
extern const style::icon &mediaPlayerVolumeIcon0;
extern const style::icon &mediaPlayerVolumeIcon1;
extern const style::IconButton &mediaPlayerVolumeToggle;
extern const int &mediaPlayerVolumeMargin;
extern const style::size &mediaPlayerVolumeSize;
extern const style::icon &mediaPlayerControlsFade;
extern const style::IconButton &mediaPlayerNextButton;
extern const style::icon &mediaPlayerNextDisabledIcon;
extern const style::IconButton &mediaPlayerPreviousButton;
extern const style::icon &mediaPlayerPreviousDisabledIcon;
extern const style::icon &touchBarIconPlayerClose;
extern const style::icon &touchBarIconPlayerPlay;
extern const style::icon &touchBarIconPlayerPause;
extern const style::icon &touchBarIconPlayerNext;
extern const style::icon &touchBarIconPlayerPrevious;
extern const style::IconButton &mediaPlayerClose;
extern const style::FilledSlider &mediaPlayerPlayback;
extern const int &mediaPlayerPanelMarginLeft;
extern const int &mediaPlayerPanelMarginBottom;
extern const int &mediaPlayerPanelWidth;
extern const style::IconButton &mediaPlayerPanelNextButton;
extern const int &mediaPlayerPanelPlaybackPadding;
extern const style::MediaSlider &mediaPlayerPanelPlayback;
extern const int &mediaPlayerPanelVolumeWidth;
extern const style::ScrollArea &mediaPlayerScroll;
extern const int &mediaPlayerListHeightMax;
extern const int &mediaPlayerListMarginBottom;
extern const style::OverviewFileLayout &mediaPlayerFileLayout;
extern const int &mediaPlayerFloatSize;
extern const int &mediaPlayerFloatMargin;
extern const style::point &mediaPlayerMenuPosition;
extern const style::Menu &mediaPlayerOrderMenu;
extern const style::Menu &mediaPlayerOrderMenuActive;
extern const style::icon &mediaPlayerOrderIconReverse;
extern const style::icon &mediaPlayerOrderIconReverseActive;
extern const style::icon &mediaPlayerOrderIconShuffle;
extern const style::icon &mediaPlayerOrderIconShuffleActive;
} // namespace st
