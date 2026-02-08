// WARNING! All changes made in this file will be lost!
// Created from 'color_indices.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#include "style_color_indices.h"

namespace {

bool inited = false;

class Module_style_color_indices : public style::internal::ModuleBase {
public:
	Module_style_color_indices() { style::internal::registerModule(this); }

	void start(int scale) override {
		style::internal::init_style_color_indices(scale);
	}
};
Module_style_color_indices registrator;


} // namespace

namespace st {
} // namespace st

namespace style {
namespace internal {

void init_style_color_indices(int scale) {
	if (inited) return;
	inited = true;

}

} // namespace internal
} // namespace style
