#include QMK_KEYBOARD_H
#define KC_TD(x) TD(x)

//Tap Dance Declarations
enum {
  TD_Q_TAB = 0,
  TD_P_BSPC
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] =
{
  [TD_Q_TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_TAB),
  [TD_P_BSPC]  = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_BSPC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
					TD(TD_Q_TAB), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, TD(TD_P_BSPC), 
					KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
					LCTL_T(KC_Z), LALT_T(KC_X), LT(2,KC_C), LT(1,KC_V), LSFT_T(KC_SPC), RALT_T(KC_B), RGUI_T(KC_N), RCTL_T(KC_M)),
	
					/*
			tab	--- | q | w | e | r | t | y | u | i | o | p |  --- bspc
					| a | s | d | f | g | h | j | k | l |Ent|
					  | z | x | c | v |  spc  | b | n | m |
					   ctr alt fn1 fn2   sft   alt win ctr
					*/
	LAYOUT(
					KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, 
					KC_GRV, KC_ESC, KC_NO, KC_BSLS, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_SCLN, KC_QUOT, 
					KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT, KC_SLSH),
	
					/*
					| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 |
					| ` |esc|   | \ | [ | ] | - | = | ; | ' |
					  |   |   |trs|trs|  trs  | , | . | / |
					*/
	LAYOUT(
					KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_HOME, KC_PSCR, KC_PGUP, KC_INS, 
					KC_F7, KC_F6, KC_F9, KC_F10, KC_F11, KC_F12, KC_END, KC_UP, KC_PGDN, KC_DEL, 
					KC_NO, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT),
	
					/*
					| F1| F2| F3| F4| F5| F6|hom|psc|pgu|ins|
					| F7| F8| F9|F10|F11|F12|end|up |pgd|del|
					  |   |fn3|trs|trs|  trs  |lef|dow|rgh|
					*/
	LAYOUT(
					RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_R, RGB_M_SN, RGB_M_X, 
					KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_B, RGB_M_SW, RGB_M_K, RGB_M_G, 
					KC_D, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET),
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}


