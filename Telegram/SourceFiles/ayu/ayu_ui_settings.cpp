// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2025
#include "ayu/ayu_ui_settings.h"

namespace AyuUiSettings {

namespace {

QString currentMonoFont;
double currentWideMultiplier = 1.0;
bool currentMaterialSwitches = false;

} // namespace

void setMonoFont(const QString &font) { currentMonoFont = font; }

QString getMonoFont() { return currentMonoFont; }

void setWideMultiplier(double multiplier) { currentWideMultiplier = multiplier; }

double getWideMultiplier() { return currentWideMultiplier; }

void setMaterialSwitches(bool enabled) { currentMaterialSwitches = enabled; }

bool getMaterialSwitches() { return currentMaterialSwitches; }

int getWideMultiplied(int px, double factor) { return int(px * currentWideMultiplier * factor); }

} // namespace AyuUiSettings
