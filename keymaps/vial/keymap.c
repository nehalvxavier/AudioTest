#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _HALF,
  _CONTROL,
  _SYMBOLS,
  _MACRO
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCOLON,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,               KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,
                        MO(4),  MO(3),  KC_SPACE,           KC_ENTER,MO(1), KC_BSPACE
    ),
    [_HALF] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
                        KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO
    ),
    [_CONTROL] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
                        KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO
    ),
    [_SYMBOLS] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
                        KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO
    ),
    [_MACRO] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,
                        KC_NO,  KC_NO,  KC_NO,              KC_NO,  KC_NO,  KC_NO
    ),
};


#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
  {
  // Key Matrix to LED Index
  { 5,  6,  11,  12,  17 },
  { 4,  7,  10,  13,  16 },
  { 3,  8,  9,   14,  15 },
  { 2, 1, 0},
  { 35, 30, 29, 24, 23 },
  { 34, 31, 28, 25, 22 },
  { 33, 32, 27, 26, 21 },
  { 18, 19, 20 }
  }, 
  // LED Index to Physical Position
  {
    {112,53},{84,49},{60,48},{10,38},{10,26},{10,14},{33,8},{33,20},{33,32},{55,30},{55,17},{55,5},{76,8},{76,20},{76,32},{98,35},{98,23},{98,11},
    {113,53},{141,49},{116,48},{214,35},{214,23},{214,11},{196,8},{190,20},{190,32},{167,30},{167,17},{167,8},{145,8},{145,17},{145,32},{123,38},{123,26},{123,14}
  },
  {
  // LED Index to Flag
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
                                4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
                                4, 4, 4
  } 
};
#endif 