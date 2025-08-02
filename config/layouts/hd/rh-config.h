/*
 * Rh-config.h
 *
 * SPDX-License-Identifier: MIT
 *
 * See handsdown/handsdown.h for HD variation codes
 *
 */

#ifdef HD_LAYOUT
#undef HD_LAYOUT
#define HD_LAYOUT rh        // HD variation 2 letter code from handsdown.h
#endif
#define HD_CONF_loaded TRUE // tell the header this is loaded
#ifndef HD_head_loaded      // no header? (this file was #included directly in keymap)
#include "handsdown.h"      // load header now for HD common defs
#endif

#define _______  &trans

/*      Base (alpha) Layer Hands Down Rhodium
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │ '<   B   H   G  ">  │ │  #$  .:  /*   J   X  │
 │  C   S   N   T   K  | |  ,;   A   E   I   M  │
 │  P   F   L   D   V  │ │  -+   U   O   Y   W  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_Layer_label "HD-Ti"
#define HD_LT &SqtLT          &ak_B           &ak_H           &ak_G           &DqtGT
#define HD_LM &mt_C RCTRL C   &mt_S RALT S    &mt_N RGUI N    &mt_T RSHFT T   &ak_K
#define HD_LB &ak_P           &ak_F           &ak_L           &ak_D           &ak_V
#define HD_LH                                                 &lt_BspcDel     &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &SlshStar       &ak_J           &ak_X
#define HD_RM &CommaMagic     &mt_A LSHFT A   &mt_E LGUI E    &mt_I LALT I    &mt_M LCTRL M
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_W
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN

// Japanese "mode" (no adaptives, & L, C, X not used so repurpose to ん, Z, -)
#define JP_Layer_label "HD-JP"
#define JP_LT &kp LBKT        &kp G           &kp M           &kp P           &kp RBKT
#define JP_LM &hml RCTRL Z    &hml RALT S     &hml RGUI N     &hml RSHFT T    &kp K
#define JP_LB &kp P           &kp F           &t_nn           &kp D           &kp V
#define JP_LH                                                 _______         &lt l_nav R

#define JP_RT _______         &DotColnJ       &SlshStarJ      &kp J           &kp MINUS
#define JP_RM _______         &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &hmr LCTRL M
#define JP_RB _______         &kp U           &kp O           &kp Y           &kp W
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
