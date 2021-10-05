/*
 * Copyright (c) 2021 Sjoerd Thijsse
 *
 * SPDX-License-Identifier: MIT
 */

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/ext_power.h>
#include <dt-bindings/zmk/outputs.h>

#define QWERTY 0
#define DVORAK 1
#define OUTERS 2
#define NAVIGA 3
#define FUNCTI 4
#define NUMBER 5
#define SYMBOL 6

#define THUMBS_2L &lt FUNCTI TAB   &lt NAVIGA SPACE
#define THUMBS_3L &kp ESC          &lt FUNCTI TAB   &lt NAVIGA SPACE
#define THUMBS_2R &lt NUMBER RET   &lt SYMBOL BSPC
#define THUMBS_3R &lt NUMBER RET   &lt SYMBOL BSPC  &kp DEL

#define QWERTY_L2 &kp Q            &kp W            &kp E            &kp R        &kp T
#define QWERTY_L3 &hm LCTRL A      &hm LALT S       &kp D            &hm LSHFT F  &kp G
#define QWERTY_L4 &sf LSHFT Z      &kp X            &kp C            &kp V        &kp B

#define QWERTY_R2 &kp Y            &kp U            &kp I            &kp O        &kp P
#define QWERTY_R3 &kp H            &hm LSHFT J      &kp K            &hm LALT L   &hm LCTRL SEMI
#define QWERTY_R4 &kp N            &kp M            &kp COMMA        &kp DOT      &sf LSHFT FSLH

#define DVORAK_L2 &kp Q            &kp COMMA        &kp DOT          &kp P        &kp Y
#define DVORAK_L3 &hmd LCTRL A     &hmd LALT O      &kp E            &hmd LSHFT U &kp I
#define DVORAK_L4 &sf LSHFT SEMI   &kp X            &kp J            &kp K        &kp X

#define DVORAK_R2 &kp F            &kp G            &kp C            &kp R        &kp L
#define DVORAK_R3 &kp D            &hmd LSHFT H     &kp T            &hmd LALT N  &hmd LCTRL S
#define DVORAK_R4 &kp B            &kp M            &kp W            &kp V        &sf LSHFT Z

#define OUTERS_L2 &trans           &trans           &trans           &trans       &trans
#define OUTERS_L3 &trans           &trans           &trans           &trans       &trans
#define OUTERS_L4 &trans           &trans           &trans           &trans       &trans

#define OUTERS_R2 &trans           &trans           &trans           &trans       &trans
#define OUTERS_R3 &trans           &trans           &trans           &trans       &trans
#define OUTERS_R4 &trans           &trans           &trans           &trans       &trans

#define NAVIGA_L2 &reset           &bt BT_SEL 2     &bt BT_SEL 1     &bt BT_SEL 0 &kp C_VOL_UP
#define NAVIGA_L3 &kp LGUI         &kp LALT         &kp LCTRL        &kp LSHFT    &kp C_VOL_DN
#define NAVIGA_L4 &bootloader      &tog OUTERS      &to QWERTY       &to DVORAK   &kp C_MUTE

#define NAVIGA_R2 &kp K_AGAIN      &kp K_UNDO       &kp K_CUT        &kp K_COPY   &kp K_PASTE
#define NAVIGA_R3 &kp LEFT         &kp DOWN         &kp UP           &kp RIGHT    &kp CAPS
#define NAVIGA_R4 &kp HOME         &kp PG_DN        &kp PG_UP        &kp END      &kp INS

#define FUNCTI_L2 &reset           &bt BT_PRV       &bt BT_NXT       &bt BT_CLR   &trans
#define FUNCTI_L3 &kp LGUI         &kp LALT         &kp LCTRL        &kp LSHFT    &trans
#define FUNCTI_L4 &bootloader      &out OUT_USB     &out OUT_BLE     &out OUT_TOG &ext_power EP_ON

#define FUNCTI_R2 &kp F12          &kp F9           &kp F8           &kp F7       &trans
#define FUNCTI_R3 &kp F11          &kp F6           &kp F5           &kp F4       &trans
#define FUNCTI_R4 &kp F10          &kp F3           &kp F2           &kp F1       &trans

#define NUMBER_L2 &kp LBKT         &kp N7           &kp N8           &kp N9       &kp RBKT
#define NUMBER_L3 &kp SQT          &kp N4           &kp N5           &kp N6       &kp EQUAL
#define NUMBER_L4 &kp GRAVE        &kp N1           &kp N2           &kp N3       &kp BSLH

#define NUMBER_R2 &kp C_VOL_UP     &bt BT_SEL 0     &bt BT_SEL 1     &bt BT_SEL 2 &reset
#define NUMBER_R3 &kp C_VOL_DN     &kp LSHFT        &kp LCTRL        &kp LALT     &kp LGUI
#define NUMBER_R4 &kp C_MUTE       &to DVORAK       &to QWERTY       &tog OUTERS  &bootloader

#define THUMBS_2N &kp N0           &kp MINUS
#define THUMBS_3N &kp DOT          &kp N0           &kp MINUS

#define SYMBOL_L2 &kp LBRC         &kp AMPS         &kp ASTRK        &kp LPAR     &kp RBRC
#define SYMBOL_L3 &kp DQT          &kp DLLR         &kp PRCNT        &kp CARET    &kp EQUAL
#define SYMBOL_L4 &kp TILDE        &kp EXCL         &kp AT           &kp HASH     &kp PIPE

#define SYMBOL_R2 &trans           &bt BT_CLR       &bt BT_NXT       &bt BT_PRV   &reset
#define SYMBOL_R3 &trans           &kp LSHFT        &kp LCTRL        &kp LALT     &kp LGUI
#define SYMBOL_R4 &ext_power EP_ON &out OUT_TOG     &out OUT_BLE     &out OUT_USB &bootloader

#define THUMBS_2S &kp LPAR         &kp RPAR
#define THUMBS_3S &kp UNDER        &kp LPAR         &kp RPAR

#define THUMBS_2C &trans           &trans
#define THUMBS_3C &trans           &trans           &trans
