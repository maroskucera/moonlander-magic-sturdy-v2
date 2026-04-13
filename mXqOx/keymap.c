#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  QK_AREP2,
  REP_RAL,  // tap = repeat (QK_REP), hold = RAlt
};



#define DUAL_FUNC_0 LT(3, KC_Q)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_V,           KC_M,           KC_L,           KC_C,           KC_P,           KC_NO,                                          KC_NO,          KC_B,           QK_AREP,          KC_U,           KC_O,           KC_Q,           KC_NO,          
    KC_NO,          KC_S,           KC_T,           KC_R,           KC_D,           KC_Y,           KC_NO,                                                                        KC_NO,          KC_F,           KC_N,           KC_E,           KC_A,           KC_I,           KC_NO,          
    KC_NO,          MT(MOD_LGUI, KC_X),MT(MOD_LALT, KC_K),MT(MOD_LCTL, KC_J),MT(MOD_LSFT, KC_G),KC_W,                                           KC_Z,           MT(MOD_LSFT, KC_H),MT(MOD_LCTL, KC_COMMA),MT(MOD_LALT, KC_DOT),MT(MOD_LGUI, KC_QUOTE),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    DUAL_FUNC_0,    LT(2, KC_SPACE),LT(3, KC_TAB),                  QK_AREP2,       MT(MOD_LSFT, KC_BSPC),REP_RAL
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_GRAVE,       KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                          KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_EQUAL,       KC_TILD,        KC_NO,          
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                                                          KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_NO,          KC_F11,         KC_F12
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_PSCR,        KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_NO,                                          KC_NO,          KC_EQUAL,       KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_NO,                                                                          KC_NO,          KC_LABK,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_BSLS,        KC_LCBR,        KC_LBRC,        KC_RBRC,        KC_RCBR,                                        KC_RABK,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_PIPE,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_NO,                          KC_LPRN,        KC_KP_0,        KC_RPRN
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_Q,           KC_O,           KC_U,           QK_AREP,          KC_B,           KC_NO,                                          KC_NO,          KC_INSERT,      KC_CAPS,        KC_NUM,         KC_SCRL,        KC_PAUSE,       KC_NO,          
    KC_NO,          KC_I,           KC_A,           KC_E,           KC_N,           KC_F,           KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          MT(MOD_LGUI, KC_QUOTE),MT(MOD_LALT, KC_DOT),MT(MOD_LCTL, KC_COMMA),MT(MOD_LSFT, KC_H),KC_Z,                                           EE_CLR,         KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_NO
  ),
};


const uint16_t PROGMEM combo0[] = { KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_O, KC_Q, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LGUI, KC_X), MT(MOD_LALT, KC_K), COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_LALT, KC_DOT), MT(MOD_LGUI, KC_QUOTE), COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_LALT, KC_K), MT(MOD_LCTL, KC_J), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_LCTL, KC_COMMA), MT(MOD_LALT, KC_DOT), COMBO_END};
const uint16_t PROGMEM combo6[] = { MT(MOD_LSFT, KC_BSPC), KC_N, COMBO_END};
const uint16_t PROGMEM combo7[] = { MT(MOD_LSFT, KC_BSPC), KC_E, COMBO_END};
const uint16_t PROGMEM combo8[] = { MT(MOD_LSFT, KC_BSPC), KC_A, COMBO_END};
const uint16_t PROGMEM combo9[] = { MT(MOD_LSFT, KC_BSPC), KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, KC_ESCAPE),
    COMBO(combo2, KC_DELETE),
    COMBO(combo3, KC_DELETE),
    COMBO(combo4, KC_ENTER),
    COMBO(combo5, KC_ENTER),
    COMBO(combo6, KC_UNDS),
    COMBO(combo7, KC_MINUS),
    COMBO(combo8, KC_SCLN),
    COMBO(combo9, KC_COLN),
};







bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case QK_AREP2:
        case REP_RAL:
            return false;  // Ignore repeat keys.
    }

    return true;  // Other keys can be repeated.
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_V: return KC_K;
        case KC_L: return KC_K;
        case KC_C: return KC_K;
        case KC_P: return KC_Y;
        case KC_U: return KC_E;
        case KC_O: return KC_A;
        case KC_Q: return KC_I;
        case KC_S: return KC_K;
        case KC_T: return KC_V;
        case KC_R: return KC_K;
        case KC_D: return KC_Y;
        case KC_Y: return KC_P;
        case KC_E: return KC_U;
        case KC_A: return KC_O;
        case KC_K: return KC_S;
        case KC_J: return KC_M;
        case KC_G: return KC_Y;
        case KC_W: return KC_D;
        case KC_TILD: return KC_SLSH;
    }

    return KC_NO;
}

static uint16_t process_arep2(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_L: return KC_R;
        case KC_C: return KC_Y;
        case KC_P: return KC_D;
        case KC_T: return KC_K;
        case KC_R: return KC_L;
        case KC_D: return KC_G;
        case KC_F: return KC_N;
        case KC_N: return KC_F;
        case KC_G: return KC_D;
        case KC_W: return KC_Y;
    }

    return KC_NO;
}


static uint16_t rep_ral_timer = 0;
static bool rep_ral_pending = false;
static bool rep_ral_committed = false;

void matrix_scan_user(void) {
    if (rep_ral_pending && timer_elapsed(rep_ral_timer) >= TAPPING_TERM) {
        register_mods(MOD_BIT(KC_RALT));
        rep_ral_committed = true;
        rep_ral_pending = false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (rep_ral_pending && record->event.pressed && keycode != REP_RAL) {
      register_mods(MOD_BIT(KC_RALT));
      rep_ral_committed = true;
      rep_ral_pending = false;
  }

  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_BSPC));
        } else {
          unregister_code16(LALT(KC_BSPC));
        }
      } else {
        if (record->event.pressed) {
          layer_on(1);
        } else {
          layer_off(1);
        }
      }
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case REP_RAL:
      if (record->event.pressed) {
          if (rep_ral_committed) {
              unregister_mods(MOD_BIT(KC_RALT));
          }
          rep_ral_timer = timer_read();
          rep_ral_pending = true;
          rep_ral_committed = false;
      } else {
          if (rep_ral_committed) {
              unregister_mods(MOD_BIT(KC_RALT));
              rep_ral_committed = false;
          } else if (rep_ral_pending && timer_elapsed(rep_ral_timer) < TAPPING_TERM) {
              uint8_t last_mods = get_last_mods();
              register_mods(last_mods);
              tap_code16(get_last_keycode());
              unregister_mods(last_mods);
          }
          rep_ral_pending = false;
      }
      return false;
    case QK_AREP2:
        if (record->event.pressed) {
            tap_code16(process_arep2(get_last_keycode(), get_last_mods()));
        }
        return false;

  }
  return true;
}

