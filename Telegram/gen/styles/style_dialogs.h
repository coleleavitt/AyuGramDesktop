// WARNING! All changes made in this file will be lost!
// Created from 'dialogs.style' by 'codegen_style'
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

void init_style_dialogs(int scale);

} // namespace internal

struct RippleAnimation;
struct TextStyle;
struct TextPalette;
struct FlatLabel;
struct RoundButton;
struct IconButton;
struct InputField;
struct CrossButton;
struct FlatButton;
struct InfiniteRadialAnimation;
struct PopupMenu;
struct IconEmoji;
struct PeerListItem;
struct PeerList;
struct ScrollArea;
struct SettingsSlider;
struct ImportantTooltip;
struct LinkButton;

struct DialogRow {
	int height;
	style::margins padding;
	int photoSize;
	int nameLeft;
	int nameTop;
	int textLeft;
	int textTop;
	int topicsSkip;
	int topicsSkipBig;
	int topicsHeight;
	int unreadMarkDiameter;
	int tagTop;
};

struct DialogRightButton {
	style::RoundButton button;
	style::margins margin;
};

struct ThreeStateIcon {
	style::icon icon;
	style::icon over;
	style::icon active;
};

struct VerifiedBadge {
	style::color color;
	int height;
};

struct ForumTopicIcon {
	int size;
	style::font font;
	int textTop;
};

struct DialogsMiniIcon {
	style::ThreeStateIcon icon;
	int skipText;
	int skipMedia;
};

struct DialogsStories {
	int left;
	int height;
	int photo;
	int photoLeft;
	int photoTop;
	int shift;
	int lineTwice;
	int lineReadTwice;
	int nameLeft;
	int nameRight;
	int nameTop;
	style::TextStyle nameStyle;
};

struct DialogsStoriesList {
	style::DialogsStories small;
	style::DialogsStories full;
	style::color bg;
	double readOpacity;
	int fullClickable;
};

} // namespace style

namespace st {
extern const style::ForumTopicIcon &defaultForumTopicIcon;
extern const style::ForumTopicIcon &normalForumTopicIcon;
extern const style::ForumTopicIcon &largeForumTopicIcon;
extern const style::ForumTopicIcon &infoForumTopicIcon;
extern const style::font &dialogsUnreadFont;
extern const int &dialogsUnreadHeight;
extern const int &dialogsUnreadPadding;
extern const style::RippleAnimation &dialogsRipple;
extern const style::font &dialogsTextFont;
extern const style::TextStyle &dialogsTextStyle;
extern const style::font &dialogsDateFont;
extern const int &dialogsDateSkip;
extern const int &dialogsRowHeight;
extern const style::point &dialogsFilterPadding;
extern const int &dialogsFilterSkip;
extern const style::DialogRow &defaultDialogRow;
extern const style::DialogRow &taggedDialogRow;
extern const style::DialogRow &forumDialogRow;
extern const style::DialogRow &taggedForumDialogRow;
extern const int &dialogRowFilterTagSkip;
extern const style::TextStyle &dialogRowFilterTagStyle;
extern const style::DialogRightButton &dialogRowOpenBot;
extern const style::DialogRightButton &dialogRowOpenBotRecent;
extern const style::icon &forumDialogJumpArrow;
extern const style::icon &forumDialogJumpArrowOver;
extern const int &forumDialogJumpArrowSkip;
extern const style::point &forumDialogJumpArrowPosition;
extern const style::margins &forumDialogJumpPadding;
extern const int &forumDialogJumpRadius;
extern const int &dialogsOnlineBadgeStroke;
extern const int &dialogsOnlineBadgeSize;
extern const style::point &dialogsOnlineBadgeSkip;
constexpr int dialogsOnlineBadgeDuration = 135;
extern const int &dialogsCallBadgeSize;
extern const style::point &dialogsCallBadgeSkip;
extern const int &dialogsSubscriptionBadgeSize;
extern const style::point &dialogsSubscriptionBadgeSkip;
extern const int &dialogsTTLBadgeSize;
extern const style::margins &dialogsTTLBadgeInnerMargins;
extern const style::point &dialogsTTLBadgeSkip;
extern const int &dialogsSpeakingStrokeNumerator;
constexpr double dialogsSpeakingDenominator = 8;
extern const int &dialogsImportantBarHeight;
constexpr int dialogsWidthDuration = 120;
extern const int &dialogsTextWidthMin;
extern const style::TextPalette &dialogsTextPalette;
extern const style::TextPalette &dialogsTextPaletteOver;
extern const style::TextPalette &dialogsTextPaletteActive;
extern const style::TextPalette &dialogsTextPaletteDraft;
extern const style::TextPalette &dialogsTextPaletteDraftOver;
extern const style::TextPalette &dialogsTextPaletteDraftActive;
extern const style::TextPalette &dialogsTextPaletteTaken;
extern const style::TextPalette &dialogsTextPaletteTakenOver;
extern const style::TextPalette &dialogsTextPaletteTakenActive;
extern const style::TextPalette &dialogsTextPaletteArchive;
extern const style::TextPalette &dialogsTextPaletteArchiveOver;
extern const style::TextPalette &dialogsTextPaletteArchiveActive;
extern const style::TextPalette &dialogsTextPaletteInTopic;
extern const style::TextPalette &dialogsTextPaletteInTopicOver;
extern const style::TextPalette &dialogsTextPaletteInTopicActive;
extern const int &dialogsEmptyHeight;
extern const int &dialogsEmptySkip;
extern const style::FlatLabel &dialogsEmptyLabel;
extern const style::RoundButton &dialogEmptyButton;
extern const int &dialogEmptyButtonSkip;
extern const style::FlatLabel &dialogEmptyButtonLabel;
extern const style::IconButton &dialogsMenuToggle;
extern const style::icon &dialogsMenuToggleUnread;
extern const style::icon &dialogsMenuToggleUnreadMuted;
extern const style::IconButton &dialogsLock;
extern const style::icon &dialogsUnlockIcon;
extern const style::icon &dialogsUnlockIconOver;
extern const style::IconButton &dialogsCalendar;
extern const style::IconButton &dialogsSearchFrom;
extern const style::IconButton &dialogsSearchForNarrowFilters;
extern const style::InputField &dialogsFilter;
extern const style::IconButton &dialogsCancelSearchInPeer;
extern const style::CrossButton &dialogsCancelSearch;
extern const style::IconButton &dialogCalendar;
extern const style::IconButton &dialogSearchFrom;
extern const int &dialogsChatTypeSkip;
extern const style::ThreeStateIcon &dialogsChatIcon;
extern const style::ThreeStateIcon &dialogsChannelIcon;
extern const style::ThreeStateIcon &dialogsBotIcon;
extern const style::ThreeStateIcon &dialogsForumIcon;
extern const style::icon &dialogsArchiveUserpic;
extern const style::icon &dialogsRepliesUserpic;
extern const style::icon &dialogsInaccessibleUserpic;
extern const style::icon &dialogsHiddenAuthorUserpic;
extern const style::icon &dialogsMyNotesUserpic;
extern const int &dialogsSendStateSkip;
extern const style::ThreeStateIcon &dialogsSendingIcon;
extern const style::ThreeStateIcon &dialogsSentIcon;
extern const style::ThreeStateIcon &dialogsReceivedIcon;
extern const style::ThreeStateIcon &dialogsPinnedIcon;
extern const style::ThreeStateIcon &dialogsLockIcon;
extern const style::VerifiedBadge &dialogsVerifiedColors;
extern const style::VerifiedBadge &dialogsVerifiedColorsOver;
extern const style::VerifiedBadge &dialogsVerifiedColorsActive;
extern const style::icon &dialogsVerifiedIcon;
extern const style::icon &dialogsVerifiedIconOver;
extern const style::icon &dialogsVerifiedIconActive;
extern const style::ThreeStateIcon &dialogsPremiumIcon;
extern const style::icon &historySendingIcon;
extern const style::icon &historySendingInvertedIcon;
extern const style::icon &historyViewsSendingIcon;
extern const style::icon &historyViewsSendingInvertedIcon;
extern const style::FlatButton &dialogsUpdateButton;
extern const style::icon &dialogsInstallUpdate;
extern const style::icon &dialogsInstallUpdateOver;
extern const int &dialogsInstallUpdateIconSkip;
extern const int &dialogsInstallUpdateIconSize;
extern const int &dialogsInstallUpdateIconInnerMargin;
extern const int &dialogsInstallUpdateIconSide1;
extern const int &dialogsInstallUpdateIconSide2;
extern const style::FlatButton &dialogsLoadMoreButton;
extern const style::icon &dialogsLoadMore;
extern const style::InfiniteRadialAnimation &dialogsLoadMoreLoading;
extern const int &dialogsSearchInHeight;
extern const int &dialogsSearchInPhotoSize;
extern const int &dialogsSearchInPhotoPadding;
extern const int &dialogsSearchInSkip;
extern const int &dialogsSearchInNameTop;
extern const int &dialogsSearchInDownTop;
extern const style::icon &dialogsSearchInDown;
extern const int &dialogsSearchInDownSkip;
extern const style::PopupMenu &dialogsSearchInMenu;
extern const style::icon &dialogsSearchInCheck;
extern const int &dialogsSearchInCheckSkip;
extern const style::TextStyle &dialogsSearchFromStyle;
extern const style::TextPalette &dialogsSearchFromPalette;
extern const style::margins &dialogsScamPadding;
extern const style::font &dialogsScamFont;
extern const int &dialogsScamSkip;
extern const int &dialogsScamRadius;
extern const int &dialogsMiniPreviewTop;
extern const int &dialogsMiniPreview;
extern const int &dialogsMiniPreviewRadius;
extern const int &dialogsMiniPreviewSkip;
extern const int &dialogsMiniPreviewRight;
extern const style::icon &dialogsMiniPlay;
extern const style::DialogsMiniIcon &dialogsMiniForward;
extern const style::IconEmoji &dialogsMiniReplyIcon;
extern const style::DialogsMiniIcon &dialogsMiniReplyStory;
extern const style::ThreeStateIcon &dialogsUnreadMention;
extern const style::ThreeStateIcon &dialogsUnreadReaction;
extern const int &downloadBarHeight;
extern const style::icon &downloadArrow;
extern const style::icon &downloadArrowOver;
extern const int &downloadArrowRight;
extern const int &downloadTitleLeft;
extern const int &downloadTitleTop;
extern const style::TextStyle &downloadInfoStyle;
extern const int &downloadInfoLeft;
extern const int &downloadInfoTop;
extern const int &downloadLoadingLeft;
extern const int &downloadLoadingSize;
extern const int &downloadLoadingLine;
extern const style::icon &downloadIconDocument;
extern const int &downloadIconSize;
extern const int &downloadIconSizeDone;
extern const style::DialogRow &forumTopicRow;
extern const style::point &forumTopicIconPosition;
extern const style::margins &editTopicTitleMargin;
extern const style::point &editTopicIconPosition;
extern const int &editTopicMaxHeight;
extern const style::PeerListItem &chooseTopicListItem;
extern const style::PeerList &chooseTopicList;
extern const style::DialogsStories &dialogsStories;
extern const style::DialogsStories &dialogsStoriesFull;
extern const style::DialogsStories &topPeers;
extern const int &topPeersRadius;
extern const style::margins &topPeersMargin;
extern const int &recentPeersEmptySize;
extern const style::margins &recentPeersEmptyMargin;
extern const int &recentPeersEmptySkip;
extern const int &recentPeersEmptyHeightMin;
extern const style::PeerListItem &recentPeersItem;
extern const style::PeerList &recentPeersList;
extern const style::PeerListItem &recentPeersItemActive;
extern const style::PeerListItem &recentPeersSpecialName;
extern const style::ScrollArea &dialogsTabsScroll;
extern const style::SettingsSlider &dialogsSearchTabs;
extern const style::SettingsSlider &chatsFiltersTabs;
extern const style::DialogsStoriesList &dialogsStoriesList;
extern const style::DialogsStoriesList &dialogsStoriesListInfo;
extern const style::DialogsStoriesList &dialogsStoriesListMine;
extern const style::ImportantTooltip &dialogsStoriesTooltip;
extern const style::FlatLabel &dialogsStoriesTooltipLabel;
extern const int &dialogsStoriesTooltipMaxWidth;
extern const style::IconButton &dialogsStoriesTooltipHide;
extern const int &searchedBarHeight;
extern const style::font &searchedBarFont;
extern const style::point &searchedBarPosition;
extern const style::FlatLabel &searchedBarLabel;
extern const style::LinkButton &searchedBarLink;
extern const style::point &dialogsSearchTagSkip;
extern const int &dialogsSearchTagBottom;
extern const style::icon &dialogsSearchTagLocked;
extern const style::TextStyle &dialogsSearchTagPromo;
extern const style::IconEmoji &dialogsSearchTagArrow;
extern const int &dialogsSearchTagPromoLeft;
extern const int &dialogsSearchTagPromoRight;
extern const int &dialogsSearchTagPromoSkip;
extern const style::margins &dialogsPopularAppsPadding;
extern const style::FlatLabel &dialogsPopularAppsAbout;
extern const int &dialogsQuickActionSize;
extern const int &dialogsQuickActionRippleSize;
extern const style::DialogRightButton &dialogsSponsoredButton;
extern const int &dialogsTopBarLeftPadding;
extern const style::TextStyle &dialogsTopBarSuggestionTitleStyle;
extern const style::TextStyle &dialogsTopBarSuggestionAboutStyle;
extern const style::icon &dialogsMiniQuoteIcon;
extern const style::FlatLabel &postsSearchIntroTitle;
extern const style::margins &postsSearchIntroTitleMargin;
extern const style::FlatLabel &postsSearchIntroSubtitle;
extern const style::margins &postsSearchIntroSubtitleMargin;
extern const style::RoundButton &postsSearchIntroButton;
extern const style::FlatLabel &postsSearchIntroFooter;
extern const style::margins &postsSearchIntroFooterMargin;
extern const style::icon &postsSearchIcon;
extern const style::margins &postsSearchIconPadding;
extern const style::icon &postsSearchArrow;
extern const style::margins &postsSearchArrowPadding;
extern const style::margins &dialogsUnconfirmedAuthPadding;
extern const style::FlatLabel &dialogsUnconfirmedAuthTitle;
extern const style::FlatLabel &dialogsUnconfirmedAuthAbout;
extern const style::RoundButton &dialogsUnconfirmedAuthButton;
extern const style::RoundButton &dialogsUnconfirmedAuthButtonNo;
} // namespace st
