#include QMK_KEYBOARD_H

#define __        KC_TRNS
#define ___       KC_TRNS
#define _______   KC_TRNS

#define _BASE    0
#define _SUPER   1
#define _MENU    2

#define SUPER   MO(_SUPER)
#define MENU    MO(_MENU)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_60_ansi(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		KC_LCTL, SUPER, KC_LALT, KC_SPC, KC_RALT, SUPER, MENU, KC_RCTL),

	[_SUPER] = LAYOUT_60_ansi(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
		KC_TAB, KC_PGUP, KC_UP, KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_LCTL, SUPER, KC_LALT, _______, KC_RALT, SUPER, MENU, KC_RCTL),

  	[_MENU] = LAYOUT_60_ansi(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, RESET,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, BL_DEC, BL_TOGG, BL_INC, BL_STEP, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______)

};