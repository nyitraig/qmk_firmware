/* Copyright 2021 nyiti
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "joystick.h"

#define ADC_PIN1 B1
#define ADC_PIN2 B0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        JS_BUTTON0,  JS_BUTTON1,  JS_BUTTON2,  JS_BUTTON3,  JS_BUTTON4, \
        JS_BUTTON5,  JS_BUTTON6,  JS_BUTTON7,  JS_BUTTON8,  JS_BUTTON9, \
        JS_BUTTON10, JS_BUTTON11, JS_BUTTON12, JS_BUTTON13, JS_BUTTON14 \
    )
};

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    // JOYSTICK_AXIS_IN(INPUT_PIN, LOW, REST, HIGH)
    [0] = JOYSTICK_AXIS_IN(ADC_PIN1, 900, 575, 285),
    [1] = JOYSTICK_AXIS_IN(ADC_PIN2, 900, 575, 285),
};
