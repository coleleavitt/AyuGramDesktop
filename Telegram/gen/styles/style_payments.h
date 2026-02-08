// WARNING! All changes made in this file will be lost!
// Created from 'payments.style' by 'codegen_style'
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

void init_style_payments(int scale);

} // namespace internal

struct RoundButton;
struct FlatLabel;
struct SettingsButton;
struct InputField;
struct InfiniteRadialAnimation;
struct PopupMenu;

} // namespace style

namespace st {
extern const style::size &paymentsPanelSize;
extern const style::RoundButton &paymentsPanelButton;
extern const style::RoundButton &paymentsPanelSubmit;
extern const style::margins &paymentsPanelPadding;
extern const style::margins &paymentsCoverPadding;
extern const style::FlatLabel &paymentsDescription;
extern const style::FlatLabel &paymentsTitle;
extern const style::FlatLabel &paymentsSeller;
extern const style::FlatLabel &paymentsWebviewBottom;
extern const style::FlatLabel &paymentsPriceLabel;
extern const style::FlatLabel &paymentsPriceAmount;
extern const style::FlatLabel &paymentsFullPriceLabel;
extern const style::FlatLabel &paymentsFullPriceAmount;
extern const int &paymentsTitleTop;
extern const int &paymentsDescriptionTop;
extern const int &paymentsSellerTop;
extern const style::size &paymentsThumbnailSize;
extern const int &paymentsThumbnailSkip;
extern const int &paymentsPricesTopSkip;
extern const int &paymentsPricesBottomSkip;
extern const style::margins &paymentsPricePadding;
extern const int &paymentsTipSkip;
extern const style::RoundButton &paymentsTipButton;
extern const style::RoundButton &paymentsTipChosen;
extern const style::margins &paymentsTipButtonsPadding;
extern const int &paymentsSectionsTopSkip;
extern const style::SettingsButton &paymentsSectionButton;
extern const style::icon &paymentsIconPaymentMethod;
extern const style::icon &paymentsIconShippingAddress;
extern const style::icon &paymentsIconName;
extern const style::icon &paymentsIconEmail;
extern const style::icon &paymentsIconPhone;
extern const style::icon &paymentsIconShippingMethod;
extern const style::InputField &paymentsField;
extern const style::InputField &paymentsMoneyField;
extern const style::FlatLabel &paymentsFieldAdditional;
extern const style::margins &paymentsFieldPadding;
extern const style::margins &paymentsSaveCheckboxPadding;
extern const int &paymentsExpireCvcSkip;
extern const style::FlatLabel &paymentsBillingInformationTitle;
extern const style::margins &paymentsBillingInformationTitlePadding;
extern const style::margins &paymentsShippingMargin;
extern const style::FlatLabel &paymentsShippingLabel;
extern const style::FlatLabel &paymentsShippingPrice;
extern const style::point &paymentsShippingLabelPosition;
extern const style::point &paymentsShippingPricePosition;
extern const style::FlatLabel &paymentTipsErrorLabel;
extern const style::margins &paymentTipsErrorPadding;
extern const style::FlatLabel &paymentsToProviderLabel;
extern const style::margins &paymentsToProviderPadding;
extern const style::FlatLabel &paymentsCriticalError;
extern const style::margins &paymentsCriticalErrorPadding;
extern const style::InfiniteRadialAnimation &paymentsLoading;
extern const style::size &botWebViewPanelSize;
extern const style::margins &botWebViewBottomPadding;
extern const style::point &botWebViewBottomSkip;
extern const style::RoundButton &botWebViewBottomButton;
extern const int &botWebViewRadialStroke;
extern const style::PopupMenu &botWebViewMenu;
} // namespace st
