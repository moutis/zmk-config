#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vf
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  X   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  F   P   L   D   V  │ │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_adapt_file "handsdown/vf-adapt.dtsi"  // the related adaptive keys file
#define HD_combo_file "handsdown/xx-combos.dtsi" // the related combo file

#define HD_Layer_label "HD-Vf"
#define HD_LT &ak_X           &ak_W           &ak_M           &ak_G           &ak_J
#define HD_LM &mt_S RCTRL S   &mt_C RALT C    &mt_N RGUI N    &mt_T RSHFT T   &ak_K
#define HD_LB &ak_F           &ak_P           &ak_L           &ak_D           &ak_V
#define HD_LH                                                 &lt_BspcDel     &lt 0 R

#define HD_RT &HashDllr       &DotColn        &SlshStar       &DqtLbkt        &SqtRbkt
#define HD_RM &CmmaSemi       &mt_A LSHFT A   &mt_E LGUI E    &mt_I LALT I    &mt_H LCTRL H
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &lt 0 SPACE     &lt 0 RETURN

