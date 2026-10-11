// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE
bool oled_task_kb(void) {
    if (!oled_task_user()) return false;
    oled_set_cursor(0, 0);
    oled_write_ln_P(PSTR("PW1.3  USB keyboard"), false);
    oled_write_P(PSTR("Layer: "), false);
    oled_write_char('0' + get_highest_layer(layer_state | default_layer_state), false);
    oled_write_ln_P(PSTR("             "), false);
    led_t leds = host_keyboard_led_state();
    oled_write_ln_P(leds.caps_lock ? PSTR("Caps: ON             ") : PSTR("Caps: OFF            "), false);
    oled_write_ln_P(PSTR("61 keys / 7x9 matrix"), false);
    return false;
}
#endif
