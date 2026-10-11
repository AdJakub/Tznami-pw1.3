// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
// Schematic-derived pin assignment; PCB controller footprint repair is outstanding.
// The pinned ChibiOS-Contrib revision names RP I2C0 as I2CD0.
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define OLED_DISPLAY_128X32
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_TIMEOUT 60000
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
