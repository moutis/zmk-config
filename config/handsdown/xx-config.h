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

#define HD_adapt_file "handsdown/xx-adapt.dtsi"  // the related adaptive keys file
#define HD_combo_file "handsdown/xx-combos.dtsi" // the related combo file

#define HD_Layer_label "HD-Vf"
#define HD_LT &kp X           &kp W           &kp M           &kp G           &kp J
#define HD_LM &hml RCTRL S    &hml RALT C     &hml RGUI N     &hml RSHFT T    &kp K
#define HD_LB &kp F           &kp P           &kp L           &kp D           &kp V
#define HD_LH                                                 &kp BSPC        &lt 0 R

#define HD_RT &kp HASH        &kp DOT         &kp FSLH        &kp DQT         &kp SQT
#define HD_RM &kp COMMA       &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &hmr LCTRL H
#define HD_RB &kp MINUS       &kp U           &kp O           &kp Y           &kp B
#define HD_RH &lt 0 SPACE     &lt 0 RETURN

