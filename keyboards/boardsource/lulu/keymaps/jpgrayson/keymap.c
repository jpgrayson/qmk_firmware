// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// Copyright 2023 Peter Grayson <pete@jpgrayson.net>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define RAISE TL_UPPR
#define LOWER TL_LOWR
#define RSFT_ENT RSFT_T(KC_ENT)
#define LCTL_ESC LCTL_T(KC_ESC)
#define KC_CAG LCAG(KC_NO)
#define KC_LAG LAG(KC_NO)

enum layers {_BASE = 0, _LOWER, _RAISE, _ADJUST};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // ,-----------------------------------------.                                ,-----------------------------------------.
  // | ESC  |   1  |   2  |   3  |   4  |   5  |                                |   6  |   7  |   8  |   9  |   0  |  BS  |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // | TAB  |   Q  |   W  |   E  |   R  |   T  |                                |   Y  |   U  |   I  |   O  |   P  |  \   |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // | CTRL |   A  |   S  |   D  |   F  |   G  |-------.                ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
  // |------+------+------+------+------+------| MENU  |                |  DEL  |------+------+------+------+------+------|
  // | LSFT |   Z  |   X  |   C  |   V  |   B  |-------|                |-------|   N  |   M  |   ,  |   .  |   /  | ENT  |
  // `-----------------------------------------/       /                \       \-----------------------------------------'
  //                   | LALT | LGUI |LOWER | /  CAG  /                  \  SPC  \  |RAISE |  LAG | RALT |
  //                   |      |      |      |/       /                    \       \ |      |      |      |
  //                   `----------------------------'                      '-------''--------------------'
  [_BASE] = LAYOUT(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  LCTL_ESC,KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_MENU,    KC_DEL, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_ENT,
                          KC_LALT,    KC_LGUI, LOWER,   KC_CAG,    KC_SPC, RAISE,   KC_LAG,  KC_RALT
  ),

  // ,-----------------------------------------.                                ,-----------------------------------------.
  // |      |  F1  |  F2  |  F3  |  F4  |  F5  |                                |  F6  |  F7  |  F8  |  F9  | F10  |      |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |   ~  |   !  |   @  |   #  |   $  |   %  |                                |   ^  |   &  |   *  |   (  |   )  |   _  |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------.                ,-------|   +  |   -  |   =  |   [  |   ]  |   |  |
  // |------+------+------+------+------+------|       |                |       |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------|                |-------| PGDN | PGUP |   {  |   }  |      |      |
  // `-----------------------------------------/       /                \       \-----------------------------------------'
  //                   |      |      |      | /       /                  \    _  \  |      |      |      |
  //                   |      |      |      |/       /                    \       \ |      |      |      |
  //                   `----------------------------'                      '-------''--------------------'
  [_LOWER] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
  _______, _______, _______, _______, _______, _______,                    KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_PIPE,
  _______, _______, _______, _______, _______, _______, _______,  _______, KC_PGDN, KC_PGUP, KC_LCBR, KC_RCBR, _______, _______,
                             _______, _______, _______, _______,  KC_UNDS, _______, _______, _______
  ),

  // ,-----------------------------------------.                                ,-----------------------------------------.
  // |      | BR-  | BR+  | MCTL | ASST |SLEEP |                                |      | REW  | PLAY |  FF  | MUTE |      |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |   `  |   1  |   2  |   3  |   4  |   5  |                                |   6  |   7  |   8  |   9  |   0  |   -  |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------.                ,-------| LEFT | DOWN |  UP  |RIGHT | HOME | END  |
  // |------+------+------+------+------+------|       |                |       |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------|                |-------| VOL- | VOL+ |      |      |      |      |
  // `-----------------------------------------/       /                \       \-----------------------------------------'
  //                   |      |      |      | /       /                  \       \  |      |      |      |
  //                   |      |      |      |/       /                    \       \ |      |      |      |
  //                   `----------------------------'                      '-------''--------------------'
  [_RAISE] = LAYOUT(
  _______, KC_BRID, KC_BRIU, KC_MCTL, KC_ASST, KC_SLEP,                    _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, _______,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  _______, _______, _______, _______, _______, _______,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_END,
  _______, _______, _______, _______, _______, _______, _______,  _______, KC_VOLD, KC_VOLU, _______, _______, _______, _______,
                             _______, _______, _______, _______,  _______, _______, _______, _______
  ),

  // ,-----------------------------------------.                                ,-----------------------------------------.
  // |REBOOT| F11  | F12  | F13  | F14  | F15  |                                | F16  | F17  | F18  | F19  | F20  | BOOT |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |      |      |      |      |      |      |                                |BLstep|      |RGBmod|RGBhue|      |      |
  // |------+------+------+------+------+------|                                |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------.                ,-------|BLtog |      |RGBtog|RGBsat|      |      |
  // |------+------+------+------+------+------|       |                |       |------+------+------+------+------+------|
  // |      |      |      |      |      |      |-------|                |-------|BLbrtg|      |      |RGBval|      |      |
  // `-----------------------------------------/       /                \       \-----------------------------------------'
  //                   |      |      |      | /       /                  \       \  |      |      |      |
  //                   |      |      |      |/       /                    \       \ |      |      |      |
  //                   `----------------------------'                      '-------''--------------------'
  [_ADJUST] = LAYOUT(
  QK_RBT,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                     KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  QK_BOOT,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    BL_STEP, XXXXXXX, RGB_MOD, RGB_HUI, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    BL_TOGG, XXXXXXX, RGB_TOG, RGB_SAI, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, BL_BRTG, XXXXXXX, XXXXXXX, RGB_VAI, XXXXXXX, _______,
                             _______, _______, _______, _______,  _______, _______, _______, _______
  )
};
