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
#define HD_LM &hml RCTRL S    &hml RALT C     &hml RGUI N     &hml RSHFT T    &ak_K
#define HD_LB &ak_F           &ak_P           &ak_L           &ak_D           &ak_V
#define HD_LH                                                 &ak_BSPC        &lt 0 R

#define HD_RT &ak_HASH        &ak_DOT         &ak_FSLH        &ak_DQT         &ak_SQT
#define HD_RM &CmmaSemi       &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &mt_H LCTRL H
#define HD_RB &ak_MINUS       &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &lt 0 SPACE     &lt 0 RETURN

