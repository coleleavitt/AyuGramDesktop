// WARNING! All changes made in this file will be lost!
// Created from 'statistics.style' by 'codegen_style'
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

void init_style_statistics(int scale);

} // namespace internal

struct TextStyle;
struct RoundButton;
struct FlatLabel;
struct SettingsButton;
struct UserpicButton;
struct PeerList;
struct IconEmoji;

} // namespace style

namespace st {
extern const style::margins &statisticsLayerOverviewMargins;
extern const style::margins &statisticsLayerMargins;
extern const int &statisticsChartHeight;
extern const style::margins &statisticsChartEntryPadding;
extern const int &statisticsDetailsArrowShift;
constexpr double statisticsDetailsArrowStroke = 1.5;
extern const style::margins &statisticsDetailsPopupMargins;
extern const style::margins &statisticsDetailsPopupPadding;
extern const int &statisticsDetailsPopupMidLineSpace;
extern const int &statisticsDetailsDotRadius;
extern const int &statisticsChartLineWidth;
extern const int &statisticsChartFooterSkip;
extern const int &statisticsChartFooterHeight;
extern const int &statisticsChartFooterBetweenSide;
extern const int &statisticsChartFooterSideWidth;
extern const int &statisticsChartFooterArrowHeight;
extern const int &statisticsChartFooterSideRadius;
extern const int &statisticsChartRulerCaptionSkip;
extern const int &statisticsChartBottomCaptionHeight;
extern const int &statisticsChartBottomCaptionSkip;
extern const style::margins &statisticsChartFlatCheckboxMargins;
extern const int &statisticsChartFlatCheckboxCheckWidth;
extern const int &statisticsChartFlatCheckboxShrinkkWidth;
extern const style::margins &statisticsFilterButtonsPadding;
extern const style::TextStyle &statisticsDetailsPopupHeaderStyle;
extern const style::TextStyle &statisticsDetailsPopupStyle;
extern const style::TextStyle &statisticsDetailsBottomCaptionStyle;
extern const style::font &statisticsPieChartFont;
extern const int &statisticsPieChartPartOffset;
extern const int &statisticsChartHeaderHeight;
extern const style::margins &statisticsChartHeaderPadding;
extern const style::TextStyle &statisticsHeaderTitleTextStyle;
extern const style::TextStyle &statisticsHeaderDatesTextStyle;
extern const style::RoundButton &statisticsHeaderButton;
extern const style::FlatLabel &statisticsLoadingSubtext;
extern const style::FlatLabel &statisticsOverviewValue;
extern const style::margins &statisticsOverviewValuePadding;
extern const style::margins &statisticsOverviewSecondValuePadding;
extern const style::FlatLabel &statisticsOverviewSecondValue;
extern const style::FlatLabel &statisticsOverviewSubtext;
extern const int &statisticsOverviewMidSkip;
extern const int &statisticsOverviewRightSkip;
extern const int &statisticsRecentPostRowHeight;
extern const style::SettingsButton &statisticsRecentPostButton;
extern const int &statisticsRecentPostIconSkip;
extern const style::icon &statisticsRecentPostShareIcon;
extern const style::icon &statisticsRecentPostReactionIcon;
extern const style::UserpicButton &statisticsRecentPostUserpic;
extern const style::SettingsButton &statisticsShowMoreButton;
extern const style::point &statisticsShowMoreButtonArrowPosition;
extern const int &statisticsShowMoreButtonArrowSize;
extern const style::margins &statisticsLimitsDividerPadding;
extern const style::margins &statisticsLimitsLinePadding;
extern const style::margins &boostsLayerOverviewMargins;
extern const style::margins &boostsOverviewValuePadding;
extern const style::margins &boostsChartHeaderPadding;
extern const style::PeerList &boostsListBox;
extern const int &boostsLinkSkip;
extern const style::margins &boostsLinkFieldPadding;
extern const style::SettingsButton &boostsButton;
extern const style::SettingsButton &getBoostsButton;
extern const style::icon &getBoostsButtonIcon;
extern const style::icon &boostsListMiniIcon;
extern const style::margins &boostsListMiniIconPadding;
extern const int &boostsListMiniIconSkip;
extern const style::IconEmoji &boostsListEntryIcon;
extern const style::margins &boostsListBadgeTextPadding;
extern const style::margins &boostsListBadgePadding;
extern const int &boostsListBadgeHeight;
extern const style::TextStyle &boostsListRightBadgeTextStyle;
extern const style::margins &boostsListRightBadgeTextPadding;
extern const style::margins &boostsListRightBadgePadding;
extern const int &boostsListRightBadgeHeight;
extern const style::margins &boostsListGiftMiniIconPadding;
extern const style::icon &boostsListGiftMiniIcon;
extern const style::icon &boostsListGiveawayMiniIcon;
extern const style::icon &boostsListUnclaimedIcon;
extern const style::icon &boostsListUnknownIcon;
extern const int &boostsListCreditsIconSize;
extern const style::icon &statisticsCurrencyIcon;
} // namespace st
