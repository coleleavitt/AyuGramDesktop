// WARNING! All changes made in this file will be lost!
// Created from 'giveaway.style' by 'codegen_style'
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

void init_style_giveaway(int scale);

} // namespace internal

struct PeerListItem;
struct SettingsButton;
struct MultiSelect;
struct FlatLabel;
struct PremiumOption;
struct RoundButton;
struct IconButton;
struct Table;
struct UserpicButton;
struct PremiumCover;
struct InputField;
struct PeerList;
struct Box;
struct ScrollArea;
struct LabelSimple;
struct TextStyle;
struct InfiniteRadialAnimation;
struct TextPalette;

} // namespace style

namespace st {
extern const style::PeerListItem &giveawayTypeListItem;
extern const style::icon &giveawayUserpic;
extern const int &giveawayUserpicSkip;
extern const style::icon &giveawayUserpicGroup;
extern const style::point &giveawayRadioPosition;
extern const style::SettingsButton &giveawayGiftCodeCountryButton;
extern const style::MultiSelect &giveawayGiftCodeCountrySelect;
extern const style::icon &giveawayGiftCodeChannelDeleteIcon;
extern const style::icon &giveawayGiftCodeChannelDeleteIconOver;
extern const style::FlatLabel &giveawayLoadingLabel;
extern const int &giveawayGiftCodeTopHeight;
extern const style::FlatLabel &giveawayGiftCodeLink;
extern const style::icon &giveawayGiftCodeLinkCopy;
extern const int &giveawayGiftCodeLinkHeight;
extern const int &giveawayGiftCodeLinkCopyWidth;
extern const style::margins &giveawayGiftCodeLinkMargin;
extern const style::PremiumOption &giveawayGiftCodeGiftOption;
extern const style::RoundButton &giveawayGiftCodeStartButton;
extern const style::FlatLabel &giveawayGiftCodeQuantitySubtitle;
extern const style::FlatLabel &giveawayGiftCodeQuantityFloat;
extern const style::IconButton &boostLinkStatsButton;
extern const style::Table &giveawayGiftCodeTable;
extern const style::margins &giveawayGiftCodeTableMargin;
extern const style::margins &giveawayGiftCodeLabelMargin;
extern const style::FlatLabel &giveawayGiftCodeValueMultiline;
extern const style::FlatLabel &giveawayGiftMessage;
extern const style::margins &giveawayGiftCodeValueMargin;
extern const style::margins &giveawayGiftCodePeerMargin;
extern const style::UserpicButton &giveawayGiftCodeUserpic;
extern const style::point &giveawayGiftCodeNamePosition;
extern const style::PremiumCover &giveawayGiftCodeCover;
extern const style::point &giveawayGiftCodeCoverClosePosition;
extern const style::margins &giveawayGiftCodeCoverDividerPadding;
extern const style::margins &giveawayGiftCodeTypeDividerPadding;
extern const style::margins &giveawayGiftCodeSliderPadding;
extern const int &giveawayGiftCodeSliderFloatSkip;
extern const style::margins &giveawayGiftCodeChannelsSubsectionPadding;
extern const style::margins &giveawayGiftCodeAdditionalPaddingMin;
extern const style::InputField &giveawayGiftCodeAdditionalField;
extern const style::FlatLabel &giveawayGiftCodeAdditionalLabel;
extern const int &giveawayGiftCodeAdditionalLabelSkip;
extern const style::PeerList &giveawayGiftCodeChannelsPeerList;
extern const style::PeerList &giveawayGiftCodeMembersPeerList;
extern const style::point &giveawayRadioMembersPosition;
extern const style::SettingsButton &giveawayGiftCodeChannelsAddButton;
extern const style::margins &giveawayGiftCodeChannelsDividerPadding;
extern const style::FlatLabel &giveawayGiftCodeFooter;
extern const style::margins &giveawayGiftCodeFooterMargin;
extern const style::Box &giveawayGiftCodeBox;
extern const style::FlatLabel &giveawayRefundedLabel;
extern const style::margins &giveawayRefundedPadding;
extern const style::Box &startGiveawayBox;
extern const style::ScrollArea &startGiveawayScrollArea;
extern const style::IconButton &startGiveawayBoxTitleClose;
extern const style::PremiumCover &startGiveawayCover;
extern const style::LabelSimple &startGiveawayButtonLabelSimple;
extern const style::icon &startGiveawayButtonMiniIcon;
extern const int &startGiveawayButtonMiniIconSkip;
extern const style::margins &startGiveawayButtonBadgeTextPadding;
extern const style::TextStyle &startGiveawayButtonTextStyle;
extern const style::InfiniteRadialAnimation &startGiveawayButtonLoading;
extern const style::InfiniteRadialAnimation &starConvertButtonLoading;
extern const style::RoundButton &starGiftSmallButton;
extern const style::Box &darkGiftCodeBox;
extern const style::icon &darkGiftLink;
extern const style::icon &darkGiftShare;
extern const style::icon &darkGiftTheme;
extern const style::icon &darkGiftTransfer;
extern const style::icon &darkGiftNftWear;
extern const style::icon &darkGiftNftTakeOff;
extern const style::icon &darkGiftNftResell;
extern const style::icon &darkGiftNftUnlist;
extern const style::icon &darkGiftHide;
extern const style::icon &darkGiftShow;
extern const style::icon &darkGiftPin;
extern const style::icon &darkGiftUnpin;
extern const style::TextPalette &darkGiftPalette;
extern const style::Table &darkGiftTable;
extern const style::FlatLabel &darkGiftTableValueMultiline;
extern const style::FlatLabel &darkGiftTableMessage;
extern const style::FlatLabel &darkGiftCodeLink;
extern const style::IconButton &darkGiftBoxClose;
} // namespace st
