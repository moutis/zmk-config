/*
 * keynames_3x5_3.h
 *
 *
 * Created by Alan on 8/14/25.
 *
 * Key Position Names for a 3x5+3 & 2+1 (39 key) form factor
 *
 *
 *                       UNIVERSAL KEY POSITION NAMES
 *          alphas & combos should be limited to 3x5+2 common core
 *     ╭─────────────────────╮                  ╭─────────────────────╮
 *     │   0   1   2   3   4 │                  │  5   6   7   8   9  │
 *     │  10  11  12  13  14 │        15        │ 16  17  18  19  20  |
 *     |  21  22  23  24  25 │                  │ 26  27  28  29  30  |
 *     ╰────────╮ 32  33  34 |                  | 35  36  37 ╭────────╯
 *           31 ╰────────────╯                  ╰────────────╯ 38
 *
 * FRA   FR1 FR2 FR3 FR4 FR5                      FR6 FR7 FR8 FR9 FR0   FRB
 * NRA   NR1 NR2 NR3 NR4 NR5                      NR6 NR7 NR8 NR9 NR0   NRB
 *     ╭─────────────────────╮                  ╭─────────────────────╮
 * LT5 │ LT4 LT3 LT2 LT1 LT0 │ LTA          RTA │ RT0 RT1 RT2 RT3 RT4 │ RT5
 * LM5 │ LM4 LM3 LM2 LM1 LM0 │ LMA    CM1   RMA │ RM0 RM1 RM2 RM3 RM4 │ RM5
 * LB5 │ LB4 LB3 LB2 LB1 LB0 │ LBA LBB  RBB RBA │ RB0 RB1 RB2 RB3 RB4 │ RB5
 *     ╰────────╮LH3 LH2 LH1 | LH0 LHA  RHA RH0 | RH1 RH2 RB3╭────────╯
 *      LH5 LH4 ╰────────────╯                  ╰────────────╯ RH4 LH5
*/

#pragma once

#define LT4 0
#define LT3 1
#define LT2 2
#define LT1 3
#define LT0 4

#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9


#define LM4 10
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14

#define CM1 15 // center column encoder/cirque trackpad/trackball

#define RM0 16
#define RM1 17
#define RM2 18
#define RM3 19
#define RM4 20


#define LB4 21
#define LB3 22
#define LB2 23
#define LB1 24
#define LB0 25

#define RB0 26
#define RB1 27
#define RB2 28
#define RB3 29
#define RB4 30


#define LH4 31
#define LH3 32
#define LH2 33
#define LH1 34

#define RH1 35
#define RH2 36
#define RH3 37
#define RH4 38

#define KEYS_L LT0 LT1 LT2 LT3 LT4  LM0 LM1 LM2 LM3 LM4 CM1 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4  RM0 RM1 RM2 RM3 RM4 CM1 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH4 LH3 LH2 LH1  RH1 RH2 RH3 RH4                                  // thumb keys
