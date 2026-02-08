// WARNING! All changes made in this file will be lost!
// Created from 'channel_earn.style' by 'codegen_style'
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

void init_style_channel_earn(int scale);

} // namespace internal

struct FlatLabel;
struct RoundButton;
struct InputField;
struct IconEmoji;

} // namespace style

namespace st {
extern const style::margins &channelEarnLearnArrowMargins;
extern const int &channelEarnOverviewTitleSkip;
extern const style::FlatLabel &channelEarnOverviewMajorLabel;
extern const style::FlatLabel &channelEarnOverviewMinorLabel;
extern const int &channelEarnOverviewMinorLabelSkip;
extern const style::FlatLabel &channelEarnOverviewSubMinorLabel;
extern const style::point &channelEarnOverviewSubMinorLabelPos;
extern const style::FlatLabel &channelEarnSemiboldLabel;
extern const style::FlatLabel &channelEarnHeaderLabel;
extern const style::FlatLabel &channelEarnHistorySubLabel;
extern const style::FlatLabel &channelEarnHistoryRecipientLabel;
extern const style::FlatLabel &channelEarnHistoryMajorLabel;
extern const style::FlatLabel &channelEarnHistoryMinorLabel;
extern const style::FlatLabel &channelEarnHistoryDescriptionLabel;
extern const int &channelEarnHistoryMinorLabelSkip;
extern const style::margins &channelEarnHistoryOuter;
extern const int &channelEarnHistoryTwoSkip;
extern const int &channelEarnHistoryThreeSkip;
extern const style::RoundButton &channelEarnHistoryRecipientButton;
extern const style::FlatLabel &channelEarnHistoryRecipientButtonLabel;
extern const style::FlatLabel &channelEarnBalanceMajorLabel;
extern const style::FlatLabel &channelEarnBalanceMinorLabel;
extern const int &channelEarnBalanceMinorLabelSkip;
constexpr int channelEarnFadeDuration = 60;
extern const style::FlatLabel &channelEarnLearnDescription;
extern const style::margins &channelEarnCurrencyCommonMargins;
extern const style::margins &channelEarnCurrencyLearnMargins;
extern const style::icon &sponsoredAboutTitleIcon;
extern const style::icon &sponsoredAboutPrivacyIcon;
extern const style::icon &sponsoredAboutRemoveIcon;
extern const style::icon &sponsoredAboutSplitIcon;
extern const style::icon &channelEarnLearnTitleIcon;
extern const style::icon &channelEarnLearnChannelIcon;
extern const style::icon &channelEarnLearnWithdrawalsIcon;
extern const style::FlatLabel &sponsoredReportLabel;
extern const style::InputField &botEarnInputField;
extern const style::FlatLabel &botEarnLockedButtonLabel;
extern const style::IconEmoji &botEarnButtonLock;
} // namespace st
