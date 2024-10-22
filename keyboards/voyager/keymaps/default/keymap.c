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
    KC_DLR,    KC_PLUS,               KC_LBRC,               KC_LCBR,               KC_LPRN,               KC_AMPR,                                        KC_EQL,     KC_RPRN,               KC_RCBR,               KC_RBRC,               KC_ASTR,                  KC_EXLM,
    KC_AT,     KC_Q,                  KC_W,                  KC_E,                  KC_R,                  KC_T,                                           KC_Y,       KC_U,                  KC_I,                  KC_O,                  KC_P,                     KC_MINUS,
    KC_BSLS,   MT(MOD_LGUI, KC_A),    MT(MOD_LALT, KC_S),    MT(MOD_LSFT, KC_D),    MT(MOD_LCTL, KC_F),    KC_G,                                           KC_H,       MT(MOD_RCTL, KC_J),    MT(MOD_RSFT, KC_K),    MT(MOD_LALT, KC_L),    MT(MOD_RGUI, KC_SCLN),    KC_QUOTE,
    KC_PIPE,   KC_Z,                  KC_X,                  KC_C,                  KC_V,                  KC_B,                                           KC_N,       KC_M,                  KC_COMMA,              KC_DOT,                KC_SLASH,                 MO(1),
                                                                                    KC_BSPC,               LT(1,KC_ESCAPE),                                KC_ENTER,   KC_SPACE
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
	{ KC_PLUS, KC_1},
	{ KC_LBRC, KC_2 },
	{ KC_LCBR, KC_3 },
	{ KC_LPRN, KC_4   },
	{ KC_AMPR, KC_5   },
	{ KC_EQL,  KC_6 },
	{ KC_RPRN, KC_7 },
	{ KC_RCBR, KC_8 },
	{ KC_RBRC, KC_9 },
	{ KC_ASTR, KC_0 },
	{ KC_EXLM, KC_PERC }, /* '( */
	{ KC_PIPE, KC_GRAVE }, /* ") */
	{ KC_AT, KC_CIRC }, /* ,; */
	{ KC_BSLS,  KC_HASH }, /* .: */
	{ KC_BSPC, KC_DEL }, /* ?! */
	{ KC_SPACE, KC_TAB }, /* ?! */
};

// Alt keys
const key_override_t alt_one = ko_make_basic(MOD_MASK_ALT, KC_PLUS, KC_1);
const key_override_t alt_two = ko_make_basic(MOD_MASK_ALT, KC_LBRC, KC_2);
const key_override_t alt_three = ko_make_basic(MOD_MASK_ALT, KC_LCBR, KC_3);
const key_override_t alt_four = ko_make_basic(MOD_MASK_ALT, KC_LPRN, KC_4);
const key_override_t alt_five = ko_make_basic(MOD_MASK_ALT, KC_AMPR, KC_5);
const key_override_t alt_six = ko_make_basic(MOD_MASK_ALT, KC_EQL, KC_6);
const key_override_t alt_seven = ko_make_basic(MOD_MASK_ALT, KC_RPRN, KC_7);
const key_override_t alt_eight = ko_make_basic(MOD_MASK_ALT, KC_RCBR, KC_8);
const key_override_t alt_nine = ko_make_basic(MOD_MASK_ALT, KC_RBRC, KC_9);
const key_override_t alt_zero = ko_make_basic(MOD_MASK_ALT, KC_ASTR, KC_0);

// CTRL keys
const key_override_t ctrl_one = ko_make_basic(MOD_MASK_CTRL, KC_PLUS, KC_1);
const key_override_t ctrl_two = ko_make_basic(MOD_MASK_CTRL, KC_LBRC, KC_2);
const key_override_t ctrl_three = ko_make_basic(MOD_MASK_CTRL, KC_LCBR, KC_3);
const key_override_t ctrl_four = ko_make_basic(MOD_MASK_CTRL, KC_LPRN, KC_4);
const key_override_t ctrl_five = ko_make_basic(MOD_MASK_CTRL, KC_AMPR, KC_5);
const key_override_t ctrl_six = ko_make_basic(MOD_MASK_CTRL, KC_EQL, KC_6);
const key_override_t ctrl_seven = ko_make_basic(MOD_MASK_CTRL, KC_RPRN, KC_7);
const key_override_t ctrl_eight = ko_make_basic(MOD_MASK_CTRL, KC_RCBR, KC_8);
const key_override_t ctrl_nine = ko_make_basic(MOD_MASK_CTRL, KC_RBRC, KC_9);
const key_override_t ctrl_zero = ko_make_basic(MOD_MASK_CTRL, KC_ASTR, KC_0);

// Command keys
const key_override_t command_one = ko_make_basic(MOD_MASK_GUI, KC_PLUS, KC_1);
const key_override_t command_two = ko_make_basic(MOD_MASK_GUI, KC_LBRC, KC_2);
const key_override_t command_three = ko_make_basic(MOD_MASK_GUI, KC_LCBR, KC_3);
const key_override_t command_four = ko_make_basic(MOD_MASK_GUI, KC_LPRN, KC_4);
const key_override_t command_five = ko_make_basic(MOD_MASK_GUI, KC_AMPR, KC_5);
const key_override_t command_six = ko_make_basic(MOD_MASK_GUI, KC_EQL, KC_6);
const key_override_t command_seven = ko_make_basic(MOD_MASK_GUI, KC_RPRN, KC_7);
const key_override_t command_eight = ko_make_basic(MOD_MASK_GUI, KC_RCBR, KC_8);
const key_override_t command_nine = ko_make_basic(MOD_MASK_GUI, KC_RBRC, KC_9);
const key_override_t command_zero = ko_make_basic(MOD_MASK_GUI, KC_ASTR, KC_0);

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_E):
            return TAPPING_TERM -25;
        case MT(MOD_LSFT, KC_U):
            return TAPPING_TERM -25;
        case MT(MOD_RSFT, KC_H):
            return TAPPING_TERM -25;
        case MT(MOD_RCTL, KC_T):
            return TAPPING_TERM -25;
        default:
            return TAPPING_TERM;
    }
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
