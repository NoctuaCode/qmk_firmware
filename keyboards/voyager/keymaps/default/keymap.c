#include QMK_KEYBOARD_H
#include "version.h"
#include "features/custom_shift_keys.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DLR,           KC_EXLM,               KC_LBRC,               KC_LCBR,               KC_LPRN,               KC_AMPR,                                        KC_PERC,                 KC_RPRN,               KC_RCBR,               KC_RBRC,               KC_ASTR,               KC_BSLS,
    KC_AT,            KC_SCLN,               KC_COMMA,              KC_DOT,                KC_P,                  KC_Y,                                           KC_F,                    KC_G,                  KC_C,                  KC_R,                  KC_L,                  KC_SLASH,
    KC_EQL,           KC_A,                  KC_O,                  KC_E,                  KC_U,                  KC_I,                                           KC_D,                    KC_H,                  KC_T,                  KC_N,                  KC_S,                  KC_MINUS,
    LT(1, KC_TAB),    KC_QUOTE,              KC_Q,                  KC_J,                  KC_K,                  KC_X,                                           KC_B,                    KC_M,                  KC_W,                  KC_V,                  KC_Z,                  KC_GRAVE,
                                                                                           MT(MOD_LCTL, KC_BSPC), MT(MOD_LGUI, KC_ESCAPE),                        MT(MOD_LALT, KC_ENTER),  MT(MOD_LSFT, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    RGB_SPD,        RGB_SLD,        RGB_MODE_FORWARD,RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_SPI,                                        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_PSCR,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          RGB_HUI,                                        KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, RGB_SAI,
    KC_TRANSPARENT, MT(MOD_LGUI, KC_F5),MT(MOD_LALT, KC_F6),MT(MOD_LCTL, KC_F7),MT(MOD_LSFT, KC_F8),RGB_HUD,                                        KC_TRANSPARENT, MT(MOD_RSFT, KC_LEFT),MT(MOD_RCTL, KC_DOWN),MT(MOD_LALT, KC_RIGHT),MT(MOD_RGUI, KC_DELETE),RGB_SAD,
    RGB_VAD,        KC_F9,          KC_F10,         KC_F11,         KC_F12,         RGB_VAI,                                        KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const custom_shift_key_t custom_shift_keys[] = {
	{ KC_DLR,  KC_TILD },
	{ KC_EXLM, KC_1},
	{ KC_LBRC, KC_2 },
	{ KC_LCBR, KC_3 },
	{ KC_LPRN, KC_4   },
	{ KC_AMPR, KC_5   },
	{ KC_PERC, KC_6 },
	{ KC_RPRN, KC_7 },
	{ KC_RCBR, KC_8 },
	{ KC_RBRC, KC_9 },
	{ KC_ASTR, KC_0 },
	{ KC_GRAVE, KC_PIPE }, /* ") */
	{ KC_AT, KC_CIRC }, /* ,; */
	{ KC_BSLS,  KC_HASH }, /* .: */
	{ KC_BSPC, KC_DEL }, /* ?! */
};

// Alt keys
const key_override_t alt_one = ko_make_basic(MOD_MASK_ALT, KC_EXLM, A(KC_1));
const key_override_t alt_two = ko_make_basic(MOD_MASK_ALT, KC_LBRC, A(KC_2));
const key_override_t alt_three = ko_make_basic(MOD_MASK_ALT, KC_LCBR, A(KC_3));
const key_override_t alt_four = ko_make_basic(MOD_MASK_ALT, KC_LPRN, A(KC_4));
const key_override_t alt_five = ko_make_basic(MOD_MASK_ALT, KC_AMPR, A(KC_5));
const key_override_t alt_six = ko_make_basic(MOD_MASK_ALT, KC_PERC, A(KC_6));
const key_override_t alt_seven = ko_make_basic(MOD_MASK_ALT, KC_RPRN, A(KC_7));
const key_override_t alt_eight = ko_make_basic(MOD_MASK_ALT, KC_RCBR, A(KC_8));
const key_override_t alt_nine = ko_make_basic(MOD_MASK_ALT, KC_RBRC, A(KC_9));
const key_override_t alt_zero = ko_make_basic(MOD_MASK_ALT, KC_ASTR, A(KC_0));

// CTRL keys
const key_override_t ctrl_one = ko_make_basic(MOD_MASK_CTRL, KC_EXLM, C(KC_1));
const key_override_t ctrl_two = ko_make_basic(MOD_MASK_CTRL, KC_LBRC, C(KC_2));
const key_override_t ctrl_three = ko_make_basic(MOD_MASK_CTRL, KC_LCBR, C(KC_3));
const key_override_t ctrl_four = ko_make_basic(MOD_MASK_CTRL, KC_LPRN, C(KC_4));
const key_override_t ctrl_five = ko_make_basic(MOD_MASK_CTRL, KC_AMPR, C(KC_5));
const key_override_t ctrl_six = ko_make_basic(MOD_MASK_CTRL, KC_PERC, C(KC_6));
const key_override_t ctrl_seven = ko_make_basic(MOD_MASK_CTRL, KC_RPRN, C(KC_7));
const key_override_t ctrl_eight = ko_make_basic(MOD_MASK_CTRL, KC_RCBR, C(KC_8));
const key_override_t ctrl_nine = ko_make_basic(MOD_MASK_CTRL, KC_RBRC, C(KC_9));
const key_override_t ctrl_zero = ko_make_basic(MOD_MASK_CTRL, KC_ASTR, C(KC_0));

// Command keys
const key_override_t command_one = ko_make_basic(MOD_MASK_GUI, KC_EXLM, G(KC_1));
const key_override_t command_two = ko_make_basic(MOD_MASK_GUI, KC_LBRC, G(KC_2));
const key_override_t command_three = ko_make_basic(MOD_MASK_GUI, KC_LCBR, G(KC_3));
const key_override_t command_four = ko_make_basic(MOD_MASK_GUI, KC_LPRN, G(KC_4));
const key_override_t command_five = ko_make_basic(MOD_MASK_GUI, KC_AMPR, G(KC_5));
const key_override_t command_six = ko_make_basic(MOD_MASK_GUI, KC_PERC, G(KC_6));
const key_override_t command_seven = ko_make_basic(MOD_MASK_GUI, KC_RPRN, G(KC_7));
const key_override_t command_eight = ko_make_basic(MOD_MASK_GUI, KC_RCBR, G(KC_8));
const key_override_t command_nine = ko_make_basic(MOD_MASK_GUI, KC_RBRC, G(KC_9));
const key_override_t command_zero = ko_make_basic(MOD_MASK_GUI, KC_ASTR, G(KC_0));

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  return TAPPING_TERM;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

const key_override_t **key_overrides = (const key_override_t *[]){
  &alt_one,
  &alt_two,
  &alt_three,
  &alt_four,
  &alt_five,
  &alt_six,
  &alt_seven,
  &alt_eight,
  &alt_nine,
  &alt_zero,
  &ctrl_one,
  &ctrl_two,
  &ctrl_three,
  &ctrl_four,
  &ctrl_five,
  &ctrl_six,
  &ctrl_seven,
  &ctrl_eight,
  &ctrl_nine,
  &ctrl_zero,
  &command_one,
  &command_two,
  &command_three,
  &command_four,
  &command_five,
  &command_six,
  &command_seven,
  &command_eight,
  &command_nine,
  &command_zero,
  NULL
};

uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
