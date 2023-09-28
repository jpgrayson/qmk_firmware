#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define RSFT_ENT RSFT_T(KC_ENT)
#define LCTL_ESC LCTL_T(KC_ESC)

#define CAG_QUOT LCAG_T(KC_QUOT)
#define HYP_QUOT HYPR_T(KC_QUOT)
#define MEH_QUOT MEH_T(KC_QUOT)

#define CAG_BSLS LCAG_T(KC_BSLS)
#define HYP_BSLS HYPR_T(KC_BSLS)
#define MEH_BSLS MEH_T(KC_BSLS)

#define CAG_TAB  LCAG_T(KC_TAB)
#define HYP_TAB  HYPR_T(KC_TAB)
#define MEH_TAB  MEH_T(KC_TAB)

#define KC_CAG LCAG(KC_NO)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                     ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC ,  KC_1  ,  KC_2  ,  KC_3  ,  KC_4  ,  KC_5  ,                        KC_6  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_0  , KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      CAG_TAB,  KC_Q  ,  KC_W  ,  KC_E  ,  KC_R  ,  KC_T  ,                        KC_Y  ,  KC_U  ,  KC_I  ,  KC_O  ,  KC_P  ,CAG_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
     LCTL_ESC,  KC_A  ,  KC_S  ,  KC_D  ,  KC_F  ,  KC_G  ,                        KC_H  ,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐   ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,  KC_Z  ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  , KC_MENU,     KC_DEL ,  KC_N  ,  KC_M  , KC_COMM, KC_DOT,  KC_SLSH,RSFT_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘   └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_LGUI, LOWER  , KC_LALT,              KC_SPC , RAISE  , KC_RALT
  //                               └────────┴────────┴────────┘            └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                     ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                       KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, KC_HOME, _______, _______, _______, _______,                       KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGUP, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐   ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______, KC_END , _______, _______, _______, _______, _______,     _______, _______, _______, KC_LCBR, KC_RCBR, KC_PGDN, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘   └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     _______, _______, _______,              KC_UNDS, _______, _______
  //                               └────────┴────────┴────────┘            └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                     ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                       KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_GRV ,  KC_1  ,  KC_2  ,  KC_3  ,  KC_4  ,  KC_5  ,                        KC_6  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_0  , KC_CAG ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, _______, _______, _______, _______, _______,                       KC_PLUS, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_MEH ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐   ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______, _______, KC_CUT , KC_COPY,KC_PASTE, _______, _______,     _______, _______, KC_UNDS, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘   └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     _______, _______, _______,              _______, _______, _______
  //                               └────────┴────────┴────────┘            └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                     ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______, KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                       KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, BL_STEP, BL_BRTG, _______, _______, _______,                       _______, _______, RGB_TOG, RGB_MOD, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, KC_MPRV, KC_MNXT, _______, KC_VOLU, _______,                       _______, _______, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐   ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______, KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, _______, _______,     _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘   └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     _______, _______, _______,              _______, _______, _______
  //                               └────────┴────────┴────────┘            └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BASE:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BASE);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
  }
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MEH_QUOT:
            // Do not select the hold action when another key is pressed.
            return false;
        default:
            // Immediately select the hold action when another key is pressed.
            return true;
    }
}

// Handles per-key configuration of Retro-Tapping
bool get_retro_tapping(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case CAG_TAB:
            return true;
        default:
            return false;
    }
}
