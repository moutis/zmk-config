//
// keynames_kyria.h
//
//
//  Created by Alan on 7/24/22.
//
/*  Key Position Names for a 3x5+5 Kyria (44 keys) form factor

    Inside the box is the 3x5+2 (34) key core def.

    While all key positions are defined, I default to
    combos only using the core 3x5+2 zone.
     ╭─────────────────────╮                  ╭─────────────────────╮
 LT5 │ LT4 LT3 LT2 LT1 LT0 │ LTA          RTB │ RT0 RT1 RT2 RT3 RT4 │ RT5
 LM5 │ LM4 LM3 LM2 LM1 LM0 | LMA          RMA | RT0 RM1 RM2 RM3 RM4 │ RM5
 LB5 │ LB4 LB3 LB2 LB1 LB0 │ LF0 LF1  RF1 RF0 │ RB0 RB1 RB2 RB3 RB4 │ RB5
     ╰───────────╮ LH2 LH1 │ LH0 LHA  RHA RH0 │ RH1 RH2 ╭───────────╯
     LH5 LH4 LH3 ╰─────────╯                  ╰─────────╯ RH3 RH4 RH5

     ╭─────────────────────╮                  ╭─────────────────────╮
 LT5 │   0   1   2   3   4 │ LTA          RTB │   5   6   7   8   9 │ RT5
 LM5 │  10  11  12  13  14 | LMA          RMA |  15  16  17  18  19 │ RM5
 LB5 │  20  21  22  23  24 │  25  26   27  28 │  29  30  31  32  33 │ RB5
     ╰───────────╮  36  37 │  38 LHA  RHA  39 │  40  41 ╭───────────╯
     LH5  34  35 ╰─────────╯                  ╰─────────╯  42  43 RH5
*/

#pragma once

// left-top row
#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

// right-top row
#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

// left-middle row
#define LM4 10
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14

// right-middle row
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

// left-bottom row
#define LB4 20
#define LB3 21
#define LB2 22
#define LB1 23
#define LB0 24

#define LBA 25  // left extra keys
#define LB0 26

#define RB0 27  // right extra keys
#define RBA 28

// right-bottom row
#define RB0 29
#define RB1 30
#define RB2 31
#define RB3 32
#define RB4 33

// left thumb keys
#define LH4 34
#define LH3 35
#define LH2 36
#define LH1 37
#define LH0 38

// right thumb keys
#define RH0 39
#define RH1 40
#define RH2 41
#define RH3 42
#define RH4 43

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  LB0 LBA // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  RB0 RBA // right-hand keys
#define THUMBS LH4 LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3 RH4                              // thumb keys
