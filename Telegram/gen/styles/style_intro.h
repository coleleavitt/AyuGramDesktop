// WARNING! All changes made in this file will be lost!
// Created from 'intro.style' by 'codegen_style'
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

void init_style_intro(int scale);

} // namespace internal

struct RippleAnimation;
struct FlatLabel;
struct LinkButton;
struct RoundButton;
struct InputField;
struct IconButton;

} // namespace style

namespace st {
extern const style::RippleAnimation &countryRipple;
extern const int &introCoverHeight;
extern const int &introCoverMaxWidth;
extern const int &introCoverIconsMinSkip;
extern const style::icon &introCoverLeft;
extern const style::icon &introCoverRight;
extern const style::icon &introCoverIcon;
extern const int &introCoverIconLeft;
extern const int &introCoverIconTop;
extern const int &introSettingsSkip;
extern const int &introPhotoTop;
extern const style::FlatLabel &introCoverTitle;
extern const int &introCoverTitleTop;
extern const style::FlatLabel &introCoverDescription;
extern const int &introCoverDescriptionTop;
extern const style::FlatLabel &introTitle;
extern const int &introTitleTop;
extern const style::FlatLabel &introDescription;
extern const style::FlatLabel &introFooter;
extern const int &introDescriptionTop;
extern const style::LinkButton &introLink;
extern const int &introPlaneWidth;
extern const int &introPlaneHeight;
extern const int &introHeight;
extern const int &introStepTopMin;
extern const int &introStepWidth;
extern const int &introNextTop;
extern const int &introNextSlide;
extern const int &introStepHeight;
extern const int &introContentTopAdd;
extern const int &introStepHeightFull;
constexpr int introSlideDuration = 180;
constexpr int introCoverDuration = 180;
extern const style::RoundButton &introNextButton;
extern const style::icon &introFragmentIcon;
extern const style::icon &introFragmentIconOver;
extern const style::RoundButton &introFragmentButton;
extern const int &introStepFieldTop;
extern const int &introPhoneTop;
extern const int &introLinkTop;
extern const style::InputField &introCountry;
extern const style::InputField &introCountryCode;
extern const style::InputField &introPhone;
extern const int &introQrLoginLinkTop;
extern const style::InputField &introCode;
extern const style::InputField &introName;
extern const style::InputField &introPassword;
extern const int &introPasswordTop;
extern const int &introPasswordHintTop;
extern const style::font &introCodeDigitFont;
extern const int &introCodeDigitHeight;
extern const int &introCodeDigitBorderWidth;
extern const int &introCodeDigitSkip;
extern const style::FlatLabel &introPasswordHint;
extern const style::RoundButton &introResetButton;
extern const int &introResetBottom;
extern const style::FlatLabel &introTermsLabel;
extern const int &introTermsBottom;
extern const style::icon &introCountryIcon;
extern const style::point &introCountryIconPosition;
extern const int &introErrorTop;
extern const int &introErrorBelowLinkTop;
extern const style::FlatLabel &introError;
extern const style::FlatLabel &introErrorCentered;
extern const style::IconButton &introBackButton;
extern const int &introQrTop;
extern const int &introQrPixel;
extern const int &introQrMaxSize;
extern const int &introQrBackgroundSkip;
extern const int &introQrBackgroundRadius;
extern const int &introQrLabelsWidth;
extern const int &introQrTitleWidth;
extern const style::FlatLabel &introQrTitle;
extern const int &introQrErrorTop;
extern const int &introQrTitleTop;
extern const style::FlatLabel &introQrStep;
extern const int &introQrStepsTop;
extern const style::margins &introQrStepMargins;
extern const int &introQrSkipTop;
extern const int &introQrCenterSize;
extern const style::icon &introQrPlane;
} // namespace st
