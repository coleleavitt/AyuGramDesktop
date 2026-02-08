// WARNING! All changes made in this file will be lost!
// Created from 'ayu_icons.style' by 'codegen_style'
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

void init_style_ayu_icons(int scale);

} // namespace internal

struct IconEmoji;
struct ThreeStateIcon;

} // namespace style

namespace st {
extern const style::icon &ayuGhostIcon;
extern const style::icon &ayuMenuIcon;
extern const style::icon &ayuEditsHistoryIcon;
extern const style::icon &ayuLReadMenuIcon;
extern const style::icon &ayuSReadMenuIcon;
extern const style::icon &ayuStreamerModeMenuIcon;
extern const style::icon &ayuMenuIconToBeginning;
extern const style::icon &messageFieldAttachIcon;
extern const style::icon &messageFieldCommandsIcon;
extern const style::icon &messageFieldEmojiIcon;
extern const style::icon &messageFieldVoiceIcon;
extern const style::icon &messageFieldTTLIcon;
extern const style::icon &inChannelBadgeIcon;
extern const style::icon &inChannelBadgeSelectedIcon;
extern const style::icon &outChannelBadgeIcon;
extern const style::icon &outChannelBadgeSelectedIcon;
extern const style::icon &infoExteraOfficialBadge;
extern const style::icon &infoExteraSupporterBadge;
extern const style::icon &winEnterWithGuestIcon;
extern const style::IconEmoji &editedIcon;
extern const style::IconEmoji &deletedIcon;
extern const style::ThreeStateIcon &dialogsExteraOfficialIcon;
extern const style::ThreeStateIcon &dialogsExteraSupporterIcon;
} // namespace st
