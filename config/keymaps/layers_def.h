/*
 
    Core/common layer defs for 3x5_2 (34) keys.

 */

//                                       Symbol & math (for Mac)
//  * left paired symbols are "linger keys" via hold taps. Tap for left, hold for pair with insertion point between
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|    Z   |    Q   |   ¶    |   †    |    ‡    |                |   ¢    |    $   |    €   |    £   |   ¥    |
//|    §   |    [   |   (    |   {    |    •    |                |   /    |    =   |    *   |    +   |   -    |
//|    ·   |    ]   |   )    |   }    |    °    |                |   ^    |    |   |    &   |    <   |   >    |
//╰──────────────────────────╮ dwdlt  |  dwdr   |                | &none  |    ¡   ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_sym_label "l_sym"

#define l_sym_LT &kp Z              &kp Q               &kp LA(N7)          &kp LA(LS(N5))      &kp LA(LS(N7))
#define l_sym_RT &kp RA(N4)         &kp DLLR            &kp LA(LS(N2))      &kp LA(N3)          &kp RA(Y)

#define l_sym_LM &kp LA(N5)         &lk_bkt RBKT LBKT   &lk_par RPAR LPAR   &lk_brc RBRC LBRC   &kp LA(N8)
#define l_sym_RM &kp FSLH           &mt RSHFT EQUAL     &mt RGUI STAR       &mt RALT PLUS       &mt LCTRL MINUS

#define l_sym_LB &kp LA(LS(N9))     &kp RBKT            &kp RPAR            &kp RBRC            &kp LA(LS(N8))
#define l_sym_RB &kp CARET          &kp PIPE            &kp AMPS            &lk_ltgt GT LT      &kp GT

#define l_sym_LH &kp LA(BSPC)       &kp LA(DEL)
#define l_sym_RH &none              &kp LA(N1)

//                                        Nav & NumPad (standard)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|   Top   |  HOME  |   UP   | PG_UP |   ¶up   |                |    /   |   7    |   8    |   9    |    -   |
//|  Lword  |  LEFT  |  DOWN  |  RGT  |  Rword  |                |    *   |  S/4   |  G/5   |  A/6   |   C/+  |
//|   Bot   |   END  |   SPC  | PG_DN |   ¶dn   |                |    -   |   1    |   2    |   3    |    =   |
//╰──────────────────────────╮  BSPC  |KP_ENTER |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_num_label "l_num"

#define l_num_LT &kp LG(UP)         &kp HOME            &kp UP              &kp PG_UP           &kp LA(UP)
#define l_num_RT &kp KP_SLASH       &kp KP_N7           &kp KP_N8           &kp KP_N9           &kp KP_MINUS

#define l_num_LM &kp LA(LEFT)       &kp LEFT            &kp DOWN            &kp RIGHT           &kp LA(RIGHT)
#define l_num_RM &kp KP_MULTIPLY    &mt RSHFT KP_N4     &mt RGUI KP_N5      &mt RALT KP_N6      &mt LCTRL KP_PLUS

#define l_num_LB &kp LG(DOWN)       &kp END             &kp SPACE           &kp PG_DN           &kp LA(DOWN)
#define l_num_RB &kp MINUS          &kp KP_N1           &kp KP_N2           &kp KP_N3           &kp KP_EQUAL

#define l_num_LH &lt l_fun BSPC     &lt l_nav KP_ENTER
#define l_num_RH &kp KP_N0          &kp KP_DOT

//                                         Fkey & Num Row (optimized)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|    F9   |  F10   |  F11   |  F12   |  F13   |                |    /   |   7    |    8   |   9    |    -   |
//|   C/F5  |  A/F6  |  G/F7  |  S/F8  |  F14   |                |    *   |  S/1   |   G/2  |  A/3   |   C/+  |
//|    F1   |   F2   |   F3   |   F4   |  F15   |                |    ,   |   4    |    5   |   6    |    =   |
//╰──────────────────────────╮  BKSP   |   DEL  |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_fun_label "l_fn"

#define l_fun_LT &kp F9             &kp F10             &kp F11             &kp F12             &kp F13
#define l_fun_RT &kp KP_SLASH       &kp N7              &kp N8              &kp N9              &kp KP_MINUS

#define l_fun_LM &mt LCTRL F5       &mt LALT F6         &mt LGUI F7         &mt LSHFT F8        &kp F14
#define l_fun_RM &kp KP_MULTIPLY    &mt RSHFT N1        &mt RGUI N2         &mt RALT N3         &mt LCTRL KP_PLUS

#define l_fun_LB &kp F1             &kp F2              &kp F3              &kp F4              &kp F15
#define l_fun_RB &kp CMMA           &kp N4              &kp N5              &kp N6              &kp EQUAL

#define l_fun_LH &kp BSPC           &kp DEL
#define l_fun_RH &kp N0             &kp DOT

//                                           Shorcuts & Navigation
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|  close |   quit  | ScrCp | SelCp |  pstmtch |                |   Top   |  HOME  |   UP   |  PG_UP | ¶up   |
//|  ctrl  |   alt   |  gui  |  shft |   Find   |                |  Lword  |  LEFT  |  DOWN  |   RGT  | Rword |
//|  undo  |   cut   |  copy |  pste |  findAgn |                |   Botm  |   END  |  DOWN  |  PG_DN | ¶dn   |
//╰──────────────────────────╮ APPSW |   APPSW  |                |  back   |  fwd  ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_nav_label "l_nav"

#define l_nav_LT &kp RG(Q)          &kp RG(W)           &kp LG(LS(N4))      &kp LG(LS(LC(N4)))  &kp ESC
#define l_nav_RT &kp LG(UP)         &kp HOME            &kp UP              &kp PG_UP           &kp LA(UP)

#define l_nav_LM &kp LCTRL          &kp LALT            &kp LGUI            &kp LSHFT           &kp RG(F)
#define l_nav_RM &kp LA(LEFT)       &kp LEFT            &kp DOWN            &kp RIGHT           &kp LA(RIGHT)

#define l_nav_LB &kp RG(Z)          &kp RG(X)           &kp RG(C)           &kp RG(V)           &kp RG(G)
#define l_nav_RB &kp LG(DOWN)       &kp END             &kp DOWN            &kp PG_DN           &kp LA(DOWN)

#define l_nav_LH &S_AppSwitch       &AppSwitch
#define l_nav_RH &kp LG(LBKT)       &kp LG(RBKT)

//                                          Keyboard & System Settings
//                      L_CFG Keyboard Configuration (left) and Media Settings (right)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//│  BT3     BT2      BT1      BT0      BT_Clr  │                │ ZOOMRST none    none    KILL-W  KILL-M     │
//│  HD_AKTg L_0      L_1      KC_VOLU  KC_BRIU |                | ZOOMOUT KC_MPRV KC_MUTE KC_MNXT KC_NO      │
//│  QK_BOOT AG_SWAP  AG_NORM  KC_VOLD  KC_BRID │                │ ZOOMIN  KC_MRWD KC_MPLY KC_MFFD QK_BOOT    │
//╰──────────────────────────╮ ZOOMOUT  ZOOMIN  │                │ ZOOMIN  ZOOMOUT ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_cfg_label "l_cfg"

#define l_cfg_LT &bt BT_SEL 3       &bt BT_SEL 2        &bt BT_SEL 1        &bt BT_SEL 0        &bt BT_CLR
#define l_cfg_RT &kp LG(N0)         &none               &none               &kp LC(LA(DEL))     &kp LG(LA(ESCAPE))

#define l_cfg_LM &none              &kp C_NEXT          &kp C_PP            &kp C_VOL_UP        &kp C_BRI_UP
#define l_cfg_RM &kp LG(EQUAL)      &kp C_VOL_UP        &kp C_MUTE          &kp C_NEXT          &none

#define l_cfg_LB _______            &kp C_PREV          &kp C_MUTE          &kp C_VOL_DN        &kp C_BRI_DN
#define l_cfg_RB &kp LG(MINUS)      &kp C_VOL_DN        &kp C_PP            &kp C_PREV          _______

#define l_cfg_LH &kp LG(EQUAL)      &kp LG(MINUS)
#define l_cfg_RH &kp LG(MINUS)      &kp LG(EQUAL)
