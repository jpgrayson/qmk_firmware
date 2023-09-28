#pragma once

#define MASTER_LEFT
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 2500  // ms
#define TAPPING_TERM 216
#define HOLD_ON_OTHER_KEY_PRESS

// #define SPLIT_LED_STATE_ENABLE

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
#endif

// #define RGBLED_NUM 4

#define OLED_BRIGHTNESS 1
#define OLED_TIMEOUT 300
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 15
