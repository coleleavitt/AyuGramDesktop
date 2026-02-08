// WARNING! All changes made in this file will be lost!
// Created from 'window.style' by 'codegen_style'
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

void init_style_window(int scale);

} // namespace internal

struct IconButton;
struct InputField;
struct UserpicButton;
struct Menu;
struct SettingsButton;
struct FlatLabel;
struct InfiniteRadialAnimation;
struct LinkButton;
struct SideBarButton;
struct PeerListItem;
struct PeerList;
struct Toast;

} // namespace style

namespace st {
extern const int &windowMinWidth;
extern const int &windowMinHeight;
extern const int &windowDefaultWidth;
extern const int &windowDefaultHeight;
extern const int &windowBigDefaultWidth;
extern const int &windowBigDefaultHeight;
extern const int &columnMinimalWidthLeft;
extern const int &columnMaximalWidthLeft;
extern const int &columnMinimalWidthMain;
extern const int &columnMinimalWidthThird;
extern const int &columnMaximalWidthThird;
extern const int &adaptiveChatWideWidth;
extern const style::color &notifyBorder;
extern const int &notifyBorderWidth;
constexpr int notifySlowHide = 4000;
extern const int &notifyPhotoSize;
extern const int &notifyMacPhotoSize;
extern const style::point &notifyPhotoPos;
extern const style::point &notifyClosePos;
extern const style::IconButton &notifyClose;
extern const int &notifyItemTop;
extern const int &notifyTextLeft;
extern const int &notifyTextTop;
constexpr int notifyWaitLongHide = 3000;
constexpr int notifyFastAnim = 150;
extern const int &notifyWidth;
extern const int &notifyMinHeight;
extern const int &notifyDeltaX;
extern const int &notifyDeltaY;
constexpr int notifyActionsDuration = 180;
extern const int &notifyHideAllHeight;
extern const style::InputField &notifyReplyArea;
extern const style::IconButton &notifySendReply;
extern const style::icon &notifyFadeRight;
extern const int &titleUnreadCounterTop;
extern const int &titleUnreadCounterRight;
extern const int &mainMenuWidth;
extern const int &mainMenuCoverHeight;
extern const int &mainMenuUserpicLeft;
extern const int &mainMenuUserpicTop;
extern const style::UserpicButton &mainMenuUserpic;
extern const style::IconButton &mainMenuCloudButton;
extern const int &mainMenuCloudSize;
extern const style::font &mainMenuResetScaleFont;
extern const int &mainMenuResetScaleLeft;
extern const int &mainMenuResetScaleRight;
extern const int &mainMenuResetScaleTop;
extern const int &mainMenuResetScaleIconLeft;
extern const int &mainMenuCoverNameLeft;
extern const int &mainMenuCoverNameTop;
extern const int &mainMenuCoverStatusLeft;
extern const int &mainMenuCoverStatusTop;
extern const int &mainMenuSkip;
extern const int &mainMenuFooterHeightMin;
extern const style::Menu &mainMenu;
extern const style::SettingsButton &mainMenuButton;
extern const style::SettingsButton &mainMenuAddAccountButton;
extern const int &mainMenuAccountSize;
extern const int &mainMenuAccountLine;
extern const style::font &mainMenuBadgeFont;
extern const int &mainMenuBadgeSize;
extern const int &mainMenuFooterLeft;
extern const style::FlatLabel &mainMenuTelegramLabel;
extern const int &mainMenuTelegramBottom;
extern const style::FlatLabel &mainMenuVersionLabel;
extern const int &mainMenuVersionBottom;
extern const int &mainMenuToggleSize;
extern const int &mainMenuToggleFourStrokes;
extern const style::point &mainMenuTogglePosition;
extern const style::size &themeEditorSampleSize;
extern const style::margins &themeEditorMargin;
extern const int &themeEditorDescriptionSkip;
extern const style::font &themeEditorNameFont;
extern const style::font &themeEditorCopyNameFont;
extern const style::icon &connectingLeftShadow;
extern const style::icon &connectingLeft;
extern const style::icon &connectingRightShadow;
extern const style::icon &connectingRight;
extern const style::icon &connectingBodyShadow;
extern const style::icon &connectingBody;
extern const style::margins &connectingMargin;
extern const style::margins &connectingTextPadding;
extern const style::InfiniteRadialAnimation &connectingRadial;
extern const style::LinkButton &connectingRetryLink;
extern const style::icon &connectingProxyOff;
extern const style::icon &connectingProxyOn;
constexpr int connectingDuration = 135;
extern const style::FlatLabel &windowOutdatedDetails;
extern const style::FlatLabel &windowOutdatedTitle;
extern const style::margins &windowOutdatedPadding;
extern const int &windowOutdatedSkip;
extern const style::IconButton &windowOutdatedClose;
extern const style::SettingsButton &createThemeImportButton;
extern const style::InputField &createThemeLink;
extern const int &windowFiltersWidth;
extern const style::SideBarButton &windowFiltersButton;
extern const style::SideBarButton &windowFiltersMainMenu;
extern const style::icon &windowFiltersMainMenuUnread;
extern const style::icon &windowFiltersMainMenuUnreadMuted;
extern const style::PeerListItem &windowFilterSmallItem;
extern const style::PeerList &windowFilterSmallList;
extern const style::IconButton &windowFilterSmallRemove;
extern const int &windowFilterSmallRemoveRight;
extern const style::InputField &windowFilterNameInput;
extern const style::point &windowFilterStaticTitlePosition;
extern const style::size &windowFilterIconToggleSize;
extern const style::point &windowFilterIconTogglePosition;
extern const style::point &windwoFilterIconPanelPosition;
extern const style::size &windowFilterIconSingle;
extern const style::margins &windowFilterIconPadding;
extern const style::point &windowFilterIconHeaderPosition;
extern const style::icon &windowFilterTypeContacts;
extern const style::icon &windowFilterTypeNonContacts;
extern const style::icon &windowFilterTypeGroups;
extern const style::icon &windowFilterTypeChannels;
extern const style::icon &windowFilterTypeBots;
extern const style::icon &windowFilterTypeNoMuted;
extern const style::icon &windowFilterTypeNoArchived;
extern const style::icon &windowFilterTypeNoRead;
extern const style::icon &windowFilterTypeNewChats;
extern const style::icon &windowFilterTypeExistingChats;
extern const int &windowFilterChatsSectionSubtitleHeight;
extern const style::FlatLabel &windowFilterChatsSectionSubtitle;
extern const style::margins &windowFilterChatsSectionSubtitlePadding;
extern const style::Toast &windowArchiveToast;
extern const style::Menu &windowFeeItem;
extern const int &ivWidthMin;
extern const int &ivHeightMin;
extern const int &ivWidthDefault;
extern const int &ivHeightDefault;
extern const int &maxWidthSharedMediaWindow;
extern const style::margins &chatSwitchMargins;
extern const style::margins &chatSwitchPadding;
extern const style::size &chatSwitchSize;
extern const style::UserpicButton &chatSwitchUserpic;
extern const style::UserpicButton &chatSwitchUserpicSublist;
extern const style::UserpicButton &chatSwitchUserpicSmall;
extern const int &chatSwitchUserpicTop;
extern const style::FlatLabel &chatSwitchNameLabel;
extern const int &chatSwitchNameSkip;
extern const int &chatSwitchSelectLine;
extern const style::icon &winQuitIcon;
constexpr double macAccessoryWidth = 450;
constexpr double macAccessoryHeight = 90;
constexpr int macEnableFilterAdd = 2;
constexpr int macEnableFilterTop = 5;
constexpr int macSelectorTop = 6;
constexpr int macAlwaysThisAppTop = 4;
constexpr int macAppHintTop = 8;
constexpr int macCautionIconSize = 16;
constexpr int macWindowRoundRadius = 10;
extern const style::icon &macWindowShadowTopLeft;
extern const style::icon &macTrayIcon;
} // namespace st
