#define _______  &trans

/*  Base (alpha) Layer(s) Hands Down Promethium-Pm
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  V   W   G   M   J  │ │  #$  .:  /*  "<  '>  │
 │  S   N   T   H   K  | |  ,;   A   E   I   C  │
 │  F   P   D   L   X  │ │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

/*
#define HD_adapt_file "handsdown/pm-adapt.dtsi"  // the related adaptive keys file
#define HD_combo_file "handsdown/pm-combos.dtsi" // the related combo file
*/

#define HD_Layer_label "HD-Pm"
#define HD_LT &ak_V           &ak_W           &ak_G           &ak_M           &ak_J
#define HD_LM &mt_S LCTRL S   &mt_N LALT N    &mt_T LGUI T    &mt_H LSHFT H   &ak_K
#define HD_LB &ak_F           &ak_P           &ak_D           &ak_L           &ak_X
#define HD_LH                                                 &lt_BspcDel     &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &SlshStar       &DqtLT          &SqtGT
#define HD_RM &CommaMagic     &mt_A RSHFT A   &mt_E RGUI E    &mt_I RALT I    &mt_C RCTRL C
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN

// Japanese "mode" (no adaptives, & L, C, X not used so repurpose to ん, Z, -)
#define JP_Layer_label "HD-JP"
#define JP_LT &kp V           &kp W           &kp G           &kp M           &kp J
#define JP_LM &hml LCTRL S    &hml LALT N     &hml LGUI T     &hml LSHFT H    &kp K
#define JP_LB &kp F           &kp P           &kp D           &t_nn           &kp MINUS
#define JP_LH                                                 _______         &lt l_nav R

#define JP_RT _______         &DotColnJ       &SlshStarJ      &kp LBKT        &kp RBKT
#define JP_RM _______         &hmr RSHFT A    &hmr RGUI E     &hmr RALT I     &hmr RCTRL Z
#define JP_RB _______         &kp U           &kp O           &kp Y           &kp B
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

