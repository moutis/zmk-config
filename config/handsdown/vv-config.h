/*
 * vv-config.h
 *
 * SPDX-License-Identifier: MIT
 *
 * See handsdown/handsdown.h for HD variation codes
 *
 */

#ifndef HD_LAYOUT       // this may have be defined in build.yml i.e. cmake-args: -DHANDSDOWN=Pm
#define HD_LAYOUT vv    // HD variation 2 letter code from handsdown.h
#endif
#include "handsdown.h"  // common HD defs

#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-Vv
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  X   W   M   G  "<  │ │  #$  .:  '>   J   B  │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │ 
 │  V   P   L   D   /* │ │  -+   U   O   Y   F  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_Layer_label "HD-Vv"
#define HD_LT &ak_X           &ak_W           &ak_M           &ak_G           &DqtLT
#define HD_LM &mt_S RCTRL S   &mt_C RALT C    &mt_N RGUI N    &mt_T RSHFT T   &ak_K
#define HD_LB &ak_V           &ak_P           &ak_L           &ak_D           &SlshStar
#define HD_LH                                                 &lt_BspcDel     &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &SqtGT          &ak_J           &ak_B
#define HD_RM &CommaMagic     &mt_A LSHFT A   &mt_E LGUI E    &mt_I LALT I    &mt_H LCTRL H
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_F
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN

// Japanese "mode" (no adaptives, & L, C, X not used so repurpose to ん, Z, -)
#define JP_Layer_label "HD-JP"
#define JP_LT &kp MINUS       &kp W           &kp M           &kp G           &kp LBKT
#define JP_LM &hml RCTRL S    &hml RALT Z     &hml RGUI N     &hml RSHFT T    &kp K
#define JP_LB &kp V           &kp P           &t_nn           &kp D           _______
#define JP_LH                                                 _______         &lt l_nav R

#define JP_RT _______         &DotColnJ       &kp RBKT        &kp J           &kp B
#define JP_RM _______         &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &hmr LCTRL H
#define JP_RB _______         &kp U           &kp O           &kp Y           &kp F
#define JP_RH _______         _______


#define l_akDOT_label "l_akDOT"
#define DOT_LT _______        _______         _______         _______         _______
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         _______         _______
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB _______        _______         _______         _______         _______
#define DOT_RH _______        _______

