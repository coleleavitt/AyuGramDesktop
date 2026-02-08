// WARNING! All changes made in this file will be lost!
// Created from 'premium.style' by 'codegen_style'
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

void init_style_premium(int scale);

} // namespace internal

struct TextStyle;
struct FlatLabel;
struct Box;
struct RoundImageCheckbox;
struct UserpicButton;
struct UserpicsRow;
struct RoundButton;
struct MediaSlider;
struct PopupMenu;

struct PremiumLimits {
	style::FlatLabel boxLabel;
	style::color nonPremiumBg;
	style::color nonPremiumFg;
	bool gradientFromLeft;
};

struct PremiumBubble {
	int widthLimit;
	int height;
	style::margins padding;
	int skip;
	int penWidth;
	int textSkip;
	style::size tailSize;
	style::font font;
	style::TextStyle additionalStyle;
	int additionalSkip;
};

struct PremiumCover {
	style::color bg;
	style::size starSize;
	int starTopSkip;
	style::margins titlePadding;
	style::font titleFont;
	style::FlatLabel about;
	int aboutMaxWidth;
	bool additionalShadowForDarkThemes;
};

struct ComposePremiumRequired {
	style::FlatLabel label;
	style::RoundButton button;
	int buttonSkip;
	int buttonTop;
	style::point position;
	style::icon icon;
};

struct PremiumOption {
	style::margins rowPadding;
	style::margins rowMargins;
	int rowHeight;
	int borderWidth;
	int borderRadius;
	int subtitleTop;
	int textLeft;
	int badgeHeight;
	int badgeRadius;
	style::margins badgeMargins;
	style::point badgeShift;
};

} // namespace style

namespace st {
extern const style::TextStyle &premiumAboutTextStyle;
extern const style::PremiumCover &defaultPremiumCover;
extern const style::FlatLabel &userPremiumCoverAbout;
extern const style::PremiumCover &userPremiumCover;
extern const style::FlatLabel &defaultPremiumBoxLabel;
extern const style::PremiumLimits &defaultPremiumLimits;
extern const style::Box &premiumPreviewBox;
extern const style::Box &premiumPreviewDoubledLimitsBox;
extern const style::margins &premiumPreviewAboutTitlePadding;
extern const style::FlatLabel &premiumPreviewAboutTitle;
extern const style::FlatLabel &premiumPreviewAbout;
extern const style::margins &premiumPreviewAboutPadding;
extern const style::FlatLabel &premiumPreviewButtonLabel;
constexpr int premiumSlideDuration = 180;
extern const style::size &premiumVideoStarSize;
extern const int &premiumPreviewHeight;
extern const int &premiumDot;
extern const style::margins &premiumDotPadding;
extern const style::margins &premiumDotsMargin;
extern const int &premiumVideoWidth;
extern const style::PremiumBubble &defaultPremiumBubble;
extern const int &premiumLineRadius;
extern const int &premiumLineTextSkip;
extern const style::margins &premiumInfographicPadding;
extern const style::icon &premiumIconChats;
extern const style::icon &premiumIconFiles;
extern const style::icon &premiumIconFolders;
extern const style::icon &premiumIconGroups;
extern const style::icon &premiumIconLinks;
extern const style::icon &premiumIconPins;
extern const style::icon &premiumIconAccounts;
extern const style::icon &premiumIconBoost;
extern const style::RoundImageCheckbox &premiumAccountsCheckbox;
extern const style::size &premiumAccountsLabelSize;
extern const style::margins &premiumAccountsLabelPadding;
constexpr int premiumAccountsLabelRadius = 6;
extern const int &premiumAccountsNameTop;
extern const style::margins &premiumAccountsPadding;
extern const int &premiumAccountsHeight;
extern const style::PremiumOption &premiumSubscriptionOption;
extern const style::PremiumOption &premiumGiftOption;
extern const style::Box &premiumGiftBox;
extern const style::UserpicButton &premiumGiftsUserpicButton;
extern const int &boostSkipTop;
extern const style::PremiumLimits &boostLimits;
extern const style::PremiumLimits &negativeStarsLimits;
extern const style::PremiumBubble &boostBubble;
extern const style::PremiumBubble &starRatingBubble;
extern const style::PremiumBubble &iconOnlyPremiumBubble;
extern const int &boostTitleSkip;
extern const style::FlatLabel &boostTitle;
extern const style::FlatLabel &boostTitleBadge;
extern const int &boostTitleBadgeSkip;
extern const style::FlatLabel &boostCenteredTitle;
extern const int &boostTextSkip;
extern const style::FlatLabel &boostText;
extern const style::FlatLabel &boostTextPending;
extern const style::FlatLabel &boostTextNegative;
extern const style::FlatLabel &boostReassignText;
extern const int &boostBottomSkip;
extern const style::Box &boostBox;
extern const style::margins &boostReplaceUserpicsPadding;
extern const int &boostReplaceUserpicsSkip;
extern const int &boostReplaceUserpicsShift;
extern const style::UserpicButton &boostReplaceUserpic;
extern const style::icon &boostReplaceIcon;
extern const int &boostReplaceIconSkip;
extern const int &boostReplaceIconOutline;
extern const style::point &boostReplaceIconAdd;
extern const style::icon &boostReplaceArrow;
extern const style::UserpicsRow &boostReplaceUserpicsRow;
extern const style::icon &showOrIconLastSeen;
extern const style::icon &showOrIconReadTime;
extern const style::color &showOrIconBg;
extern const style::margins &showOrIconPadding;
extern const style::margins &showOrIconMargin;
extern const style::margins &showOrTitlePadding;
extern const style::margins &showOrAboutPadding;
extern const style::RoundButton &showOrShowButton;
extern const style::FlatLabel &showOrLabel;
extern const int &showOrLineWidth;
extern const int &showOrLabelSkip;
extern const int &showOrLineTop;
extern const style::margins &showOrLabelPadding;
extern const style::margins &showOrPremiumAboutPadding;
extern const style::Box &showOrBox;
extern const int &boostBoxMaxHeight;
extern const style::FlatLabel &boostLevelBadge;
extern const style::margins &boostLevelBadgePadding;
extern const int &boostLevelBadgeSkip;
extern const int &boostLevelBadgeLine;
extern const style::FlatLabel &boostFeatureLabel;
extern const style::margins &boostFeaturePadding;
extern const style::point &boostFeatureIconPosition;
extern const style::icon &boostFeatureBackground;
extern const style::icon &boostFeatureCustomBackground;
extern const style::icon &boostFeatureCustomEmoji;
extern const style::icon &boostFeatureCustomLink;
extern const style::icon &boostFeatureCustomReactions;
extern const style::icon &boostFeatureEmojiStatus;
extern const style::icon &boostFeatureLink;
extern const style::icon &boostFeatureName;
extern const style::icon &boostFeatureStories;
extern const style::icon &boostFeatureTranscribe;
extern const style::icon &boostFeatureAutoTranslate;
extern const style::icon &boostFeatureOffSponsored;
extern const style::Box &paidReactBox;
extern const style::icon &paidReactBubbleIcon;
extern const int &paidReactBubbleTop;
extern const int &paidReactSliderTop;
extern const style::MediaSlider &paidReactSlider;
extern const int &paidReactTitleSkip;
extern const style::margins &paidReactTopTitleMargin;
extern const style::margins &paidReactTopMargin;
extern const int &paidReactTopUserpic;
extern const int &paidReactTopNameSkip;
extern const int &paidReactTopBadgeSkip;
extern const style::FlatLabel &paidReactToastLabel;
extern const style::icon &paidReactTopStarIcon;
extern const style::point &paidReactTopStarIconPosition;
extern const int &paidReactTopStarSkip;
extern const style::icon &paidReactChannelArrow;
extern const style::PopupMenu &paidReactChannelMenu;
extern const int &toastUndoStroke;
extern const int &toastUndoSpace;
extern const int &toastUndoDiameter;
extern const int &toastUndoSkip;
extern const style::font &toastUndoFont;
extern const style::PremiumCover &starrefCover;
extern const int &starrefCoverHeight;
extern const style::RoundButton &starrefFooterButton;
extern const style::Box &starrefFooterBox;
extern const style::RoundButton &starrefCopyButton;
extern const style::icon &starrefJoinIcon;
extern const style::margins &starrefJoinUserpicsPadding;
extern const style::margins &starrefJoinTitlePadding;
extern const style::FlatLabel &starrefCenteredText;
extern const style::FlatLabel &starrefJoinFooter;
extern const style::FlatLabel &starrefRevenueText;
extern const style::point &starrefInfoIconPosition;
extern const style::RoundButton &starrefBottomButton;
extern const style::margins &starrefButtonMargin;
extern const style::FlatLabel &starrefBottomButtonLabel;
extern const style::FlatLabel &starrefBottomButtonSublabel;
extern const int &starrefBottomButtonLabelTop;
extern const int &starrefBottomButtonSublabelTop;
extern const int &starrefEndBulletSize;
extern const int &starrefEndBulletTop;
extern const int &starrefLinkThumbOuter;
extern const int &starrefLinkThumbInner;
extern const int &starrefLinkCountAdd;
extern const style::icon &starrefLinkCountIcon;
extern const style::point &starrefLinkCountIconPosition;
extern const style::font &starrefLinkCountFont;
extern const style::margins &starrefLinkCountPadding;
extern const style::color &starrefRecipientBg;
extern const style::color &starrefRecipientBgDisabled;
extern const style::icon &starrefRecipientArrow;
extern const style::font &starrefCommissionFont;
extern const style::margins &starrefCommissionPadding;
extern const int &starrefLinkBadge;
extern const int &starrefLinkBadgeSkip;
extern const style::icon &starrefAddForBotIcon;
extern const style::point &starrefAddForBotIconPosition;
extern const style::PopupMenu &starrefPopupMenu;
} // namespace st
