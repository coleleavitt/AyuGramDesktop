#!/bin/bash

# AyuGram Dependencies Installation Script for Gentoo
# Run as root or with sudo privileges

set -e


cd ./Telegram/

echo "Installing AyuGram build dependencies..."

# Core Qt6 dependencies
emerge --ask dev-qt/qtcore \
              dev-qt/qtgui \
              dev-qt/qtwidgets \
              dev-qt/qtnetwork \
              dev-qt/qtdbus \
              dev-qt/qtconcurrent \
              dev-qt/qtimageformats

# Multimedia libraries
emerge --ask media-video/ffmpeg \
              media-libs/opus \
              media-libs/openh264 \
              media-libs/libjxl \
              media-libs/libvpx \
              media-sound/rnnoise

# Image and graphics support
emerge --ask media-libs/libjpeg-turbo \
              media-libs/libpng \
              x11-libs/libX11 \
              x11-libs/libxcb \
              x11-libs/xcb-util-keysyms \
              x11-libs/xcb-util \
              media-libs/mesa

# System libraries
emerge --ask dev-libs/glib \
              dev-libs/openssl \
              app-text/hunspell \
              dev-libs/lz4 \
              sys-libs/zlib \
              x11-libs/libxkbcommon \
              dev-libs/xxhash

# Build tools
emerge --ask dev-util/cmake \
              dev-util/ninja \
              sys-devel/gcc \
              sys-devel/clang

# Emoji and font support
emerge --ask media-fonts/noto-emoji \
              media-fonts/noto-color-emoji \
              media-fonts/twemoji-color-font

echo "All dependencies installed successfully!"
echo "You can now build AyuGram from source."
