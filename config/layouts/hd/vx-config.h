/*
 * Vx-config.h
 *
 * SPDX-License-Identifier: MIT
 *
 * See handsdown/handsdown.h for HD variation codes
 *
 */
#pragma once

#define HD_LAYOUT vx        // HD variation 2 letter code from handsdown.h
#include "handsdown.h"      // load header now for HD common defs

#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vx
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  V   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  X   P   L   D   B  │ │  -+   U   O   Y   F  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_Layer_label "HD-Vx"
#define HD_LT &ak_V           &ak_W           &ak_M           &ak_G           &ak_J
#define HD_LM &mt_S LCTRL S   &mt_C LALT C    &mt_N LGUI N    &mt_T LSHFT T   &ak_K
#define HD_LB &ak_X           &ak_P           &ak_L           &ak_D           &ak_B
#define HD_LH                                                 &lt_BSPC l_fun BSPC &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &SlshStar       &DqtLT          &SqtGT
#define HD_RM &CommaMagic     &mt_A RSHFT A   &mt_E RGUI E    &mt_I RALT I    &mt_H RCTRL H
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_F
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN

// Japanese "mode" (no adaptives, & L, C, X not used so repurpose to ん, Z, -)
#define JP_Layer_label "HD-JP"
#define JP_LT &kp MINUS       &kp W           &kp M           &kp G           &kp J
#define JP_LM &hml RCTRL S    &hml RALT Z     &hml RGUI N     &hml RSHFT T    &kp K
#define JP_LB &kp X           &kp P           &t_nn           &kp D           &kp B
#define JP_LH                                                 _______         &lt l_nav R

#define JP_RT _______         &DotColnJ       &SlshStarJ      &lk_LRbkt       &kp RBKT
#define JP_RM _______         &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &hmr LCTRL H
#define JP_RB _______         &kp U           &kp O           &kp Y           &kp
#define JP_RH _______         _______


#define l_akDOT_label "l_akDOT" // adaptive grabbag sticky layer.
#define DOT_LT &kp T          &kp L           &kp L           &kp L           _______
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         &b_wd           _______
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB _______        _______         _______         _______         _______
#define DOT_RH _______        _______

