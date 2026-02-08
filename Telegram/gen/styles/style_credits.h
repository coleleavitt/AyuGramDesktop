// WARNING! All changes made in this file will be lost!
// Created from 'credits.style' by 'codegen_style'
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

void init_style_credits(int scale);

} // namespace internal

struct FlatLabel;
struct RoundButton;
struct PremiumCover;
struct SettingsButton;
struct IconEmoji;
struct Box;
struct TextStyle;
struct PopupMenu;
struct InputField;
struct PeerList;
struct IconButton;
struct SettingsSlider;

} // namespace style

namespace st {
extern const style::FlatLabel &creditsSettingsBigBalance;
extern const int &creditsSettingsBigBalanceSkip;
extern const style::RoundButton &creditsSettingsBigBalanceButton;
extern const style::RoundButton &creditsSettingsBigBalanceButtonGift;
extern const style::PremiumCover &creditsPremiumCover;
extern const style::PremiumCover &creditsLowBalancePremiumCover;
extern const int &creditsLowBalancePremiumCoverHeight;
extern const style::SettingsButton &creditsTopupButton;
extern const style::FlatLabel &creditsTopupPrice;
extern const int &creditsHistoryRightSkip;
extern const int &creditsBalanceStarHeight;
extern const style::FlatLabel &creditsBoxAbout;
extern const style::FlatLabel &creditsBoxAboutTitle;
extern const style::FlatLabel &creditsBoxAboutDivider;
extern const style::FlatLabel &creditsBoxButtonLabel;
extern const style::FlatLabel &creditsReleasedByLabel;
extern const style::IconEmoji &starIconEmoji;
extern const style::IconEmoji &starIconEmojiColored;
extern const style::IconEmoji &starIconEmojiSmall;
extern const style::IconEmoji &starIconEmojiLarge;
extern const style::IconEmoji &tonIconEmoji;
extern const style::IconEmoji &tonIconEmojiLarge;
extern const style::IconEmoji &tonIconEmojiInSmall;
extern const style::icon &creditsHistoryEntryTypeAds;
extern const style::icon &creditsHistorySearchPostsIcon;
extern const int &creditsHistoryEntryGiftStickerSkip;
extern const int &creditsHistoryEntryGiftStickerSize;
extern const int &creditsHistoryEntryGiftStickerSpace;
extern const int &creditsHistoryEntryStarGiftSkip;
extern const int &creditsHistoryEntryStarGiftSize;
extern const int &creditsHistoryEntryStarGiftSpace;
extern const style::Box &creditsGiftBox;
extern const style::Box &giftBox;
extern const style::Box &giftLimitedBox;
extern const style::margins &giftLimitedPadding;
extern const style::FlatLabel &giftBoxSubtitle;
extern const style::margins &giftBoxSubtitleMargin;
extern const style::FlatLabel &giftBoxAbout;
extern const style::margins &giftBoxAboutMargin;
extern const style::margins &giftBoxTabsMargin;
extern const style::margins &giftBoxTabPadding;
extern const int &giftBoxTabSkip;
extern const style::TextStyle &giftBoxTabStyle;
extern const style::color &giftBoxTabFg;
extern const style::color &giftBoxTabFgActive;
extern const style::color &giftBoxTabBgActive;
extern const style::margins &giftBoxResaleTabsMargin;
extern const int &giftBoxResaleTabSkip;
extern const style::IconEmoji &giftBoxResaleTabsDropdown;
extern const style::IconEmoji &giftBoxResaleMiniNumber;
extern const style::IconEmoji &giftBoxResaleMiniPrice;
extern const style::IconEmoji &giftBoxResaleMiniDate;
extern const style::PopupMenu &giftBoxResaleFilter;
extern const int &giftBoxResaleColorSize;
extern const int &giftBoxResaleColorTop;
extern const style::margins &giftBoxPadding;
extern const style::point &giftBoxGiftSkip;
extern const int &giftBoxGiftHeight;
extern const int &giftBoxGiftSmall;
extern const int &giftBoxGiftRadius;
extern const style::font &giftBoxGiftBadgeFont;
extern const style::TextStyle &giftBoxByStarsStyle;
extern const int &giftBoxByStarsSkip;
extern const int &giftBoxByStarsStarTop;
extern const int &giftBoxPremiumIconSize;
extern const int &giftBoxPremiumIconTop;
extern const int &giftBoxPremiumTextTop;
extern const int &giftBoxPremiumTextTopByStars;
extern const int &giftBoxButtonBottomSmall;
extern const int &giftBoxButtonBottom;
extern const int &giftBoxButtonBottomByStars;
extern const style::margins &giftBoxButtonPadding;
extern const style::margins &giftBoxPreviewStickerPadding;
extern const style::margins &giftBoxPreviewTitlePadding;
extern const style::margins &giftBoxReleasedByMargin;
extern const style::margins &giftBoxPreviewTextPadding;
extern const style::margins &giftBoxButtonMargin;
extern const int &giftBoxStickerTop;
extern const int &giftBoxStickerStarTop;
extern const int &giftBoxSmallStickerTop;
extern const int &giftBoxStickerTopByStars;
extern const style::size &giftBoxStickerSize;
extern const int &giftBoxSelectSkip;
extern const int &giftBoxUserpicSize;
extern const int &giftBoxUserpicSkip;
extern const style::InputField &giftBoxTextField;
extern const style::margins &giftBoxTextPadding;
extern const style::icon &giftBoxHiddenMark;
extern const style::FlatLabel &giftListAbout;
extern const style::margins &giftListAboutMargin;
extern const int &giftBoxEmojiToggleTop;
extern const int &giftBoxLimitTop;
extern const style::IconEmoji &giftBoxLock;
extern const style::icon &giftBoxPinIcon;
extern const style::icon &giftBoxLockIcon;
extern const style::point &giftBoxLockIconPosition;
extern const style::PeerList &creditsHistoryEntriesList;
extern const style::margins &subscriptionCreditsBadgePadding;
extern const int &uniqueGiftModelTop;
extern const style::FlatLabel &uniqueGiftTitle;
extern const style::FlatLabel &uniqueGiftResalePrice;
extern const style::margins &uniqueGiftResalePadding;
extern const style::margins &uniqueGiftResaleMargin;
extern const int &uniqueGiftTitleTop;
extern const style::FlatLabel &uniqueGiftSubtitle;
extern const int &uniqueGiftSubtitleTop;
extern const int &uniqueGiftUserpicTop;
extern const int &uniqueGiftUserpicSize;
extern const int &uniqueGiftBottom;
extern const style::IconButton &uniqueCloseButton;
extern const style::IconButton &uniqueMenuButton;
extern const style::Box &upgradeGiftBox;
extern const style::FlatLabel &upgradeGiftSubtext;
extern const style::FlatLabel &darkUpgradeGiftTitle;
extern const style::FlatLabel &darkUpgradeGiftSubtitle;
extern const style::Box &darkUpgradeGiftBox;
extern const style::icon &darkUpgradeGiftRadiant;
extern const style::icon &darkUpgradeGiftProof;
extern const style::FlatLabel &darkUpgradeGiftInfoTitle;
extern const style::FlatLabel &darkUpgradeGiftInfoAbout;
extern const style::Box &giftTooManyPinnedBox;
extern const style::FlatLabel &giftTooManyPinnedChoose;
extern const style::SettingsSlider &creditsHistoryTabsSlider;
extern const style::margins &creditsHistoryTabsSliderPadding;
extern const int &creditsHistoryRowDescriptionSkip;
extern const int &creditsHistoryRowRightTop;
extern const int &creditsHistoryRowRightMinorTop;
extern const style::TextStyle &creditsHistoryRowRightStyle;
extern const style::FlatLabel &resaleButtonTitle;
extern const style::FlatLabel &resaleButtonSubtitle;
extern const style::FlatLabel &resaleConfirmTonOnly;
extern const style::margins &resaleConfirmTonOnlyMargin;
extern const style::FlatLabel &uniqueGiftValuePrice;
extern const style::FlatLabel &uniqueGiftValueAbout;
extern const style::FlatLabel &uniqueGiftValueAvailableLink;
extern const style::margins &uniqueGiftValueAvailableMargin;
} // namespace st
