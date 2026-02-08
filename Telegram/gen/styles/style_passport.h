// WARNING! All changes made in this file will be lost!
// Created from 'passport.style' by 'codegen_style'
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

void init_style_passport(int scale);

} // namespace internal

struct FlatLabel;
struct UserpicButton;
struct RoundButton;
struct ScrollArea;
struct RippleAnimation;
struct SettingsButton;
struct TextStyle;
struct PassportScanRow;
struct InputField;

} // namespace style

namespace st {
extern const style::margins &passportPasswordPadding;
extern const style::FlatLabel &passportPasswordLabel;
extern const style::FlatLabel &passportPasswordLabelBold;
extern const style::FlatLabel &passportPasswordSetupLabel;
extern const style::FlatLabel &passportPasswordHintLabel;
extern const style::FlatLabel &passportErrorLabel;
extern const style::FlatLabel &passportVerifyErrorLabel;
extern const style::size &passportPanelSize;
extern const int &passportPasswordFieldBottom;
extern const int &passportPasswordFieldSkip;
extern const int &passportPasswordHintSkip;
extern const int &passportPasswordUserpicSkip;
extern const style::UserpicButton &passportPasswordUserpic;
extern const style::RoundButton &passportPasswordSubmit;
extern const int &passportPasswordSubmitBottom;
extern const int &passportPasswordForgotBottom;
extern const style::ScrollArea &passportPanelScroll;
extern const style::RoundButton &passportPanelAuthorize;
extern const style::RoundButton &passportPanelSaveValue;
extern const style::margins &passportFormAbout1Padding;
extern const style::margins &passportFormAbout2Padding;
extern const style::FlatLabel &passportFormHeader;
extern const style::margins &passportFormHeaderPadding;
extern const style::UserpicButton &passportFormUserpic;
extern const style::margins &passportFormUserpicPadding;
extern const int &passportFormDividerHeight;
extern const style::margins &passportFormLabelPadding;
extern const style::FlatLabel &passportFormPolicy;
extern const style::margins &passportFormPolicyPadding;
extern const style::margins &passportContactNewFieldPadding;
extern const style::margins &passportContactFieldPadding;
extern const style::margins &passportContactErrorPadding;
extern const style::margins &passportContactErrorMargin;
extern const style::margins &passportRowPadding;
extern const int &passportRowIconSkip;
extern const int &passportRowSkip;
extern const style::RippleAnimation &passportRowRipple;
extern const style::icon &passportRowReadyIcon;
extern const style::icon &passportRowEmptyIcon;
extern const style::color &passportRowTitleFg;
extern const style::color &passportRowDescriptionFg;
extern const style::SettingsButton &passportUploadButton;
extern const style::margins &passportUploadButtonPadding;
extern const style::margins &passportUploadHeaderPadding;
extern const style::margins &passportUploadErrorPadding;
extern const style::margins &passportValueErrorPadding;
extern const style::SettingsButton &passportDeleteButton;
extern const style::TextStyle &passportScanNameStyle;
extern const style::PassportScanRow &passportScanRow;
constexpr double passportScanDeletedOpacity = 0.4;
extern const style::margins &passportDetailsHeaderPadding;
extern const style::margins &passportDetailsPadding;
extern const style::InputField &passportDetailsField;
extern const style::InputField &passportDetailsDateField;
extern const style::FlatLabel &passportDetailsSeparator;
extern const style::margins &passportDetailsSeparatorPadding;
extern const style::InputField &passportContactField;
extern const int &passportDetailsFieldLeft;
extern const int &passportDetailsFieldTop;
extern const int &passportDetailsFieldSkipMin;
extern const int &passportDetailsSkip;
extern const int &passportDetailsGenderSkip;
extern const int &passportRequestTypeSkip;
extern const style::margins &passportPasswordAbout1Padding;
extern const style::margins &passportPasswordAbout2Padding;
extern const int &passportPasswordIconHeight;
extern const style::icon &passportPasswordIcon;
extern const style::margins &passportNativeNameAboutMargin;
extern const style::margins &passportNativeNameHeaderPadding;
} // namespace st
