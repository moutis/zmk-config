//
// keynames_4x12.h
//
//
//  Created by Alan on 7/24/22.
//
/*  Key Position Names for a Planck 12x4 (48 key) ortholinear form factor

    Inside the box is the 3x5+5 (34) key core def.
 
    A = Standard Planck's 6th column for "Wide Planck"
    (Standard Planck 6th column is undefined here)
     ╭─────────────────────╮                  ╭─────────────────────╮
 LT5 │ LT4 LT3 LT2 LT1 LT0 │ LTA          RTA │ RT0 RT1 RT2 RT3 RT4 │ RT5
 LM5 │ LM4 LM3 LM2 LM1 LM0 | LMA          RMA | RT0 RM1 RM2 RM3 RM4 │ RM5
 LB5 │ LB4 LB3 LB2 LB1 LB0 │ LBA          RBA │ RB0 RB1 RB2 RB3 RB4 │ RB5
     ╰───────────╮ LH2 LH1 │ LH0 LHA  RHA RH0 │ RH1 RH2 ╭───────────╯
     LH5 LH4 LH3 ╰─────────╯                  ╰─────────╯ RH3 RH4 RH5

     ╭─────────────────────╮                  ╭─────────────────────╮
     │   0   1   2   3   4 │ 5              6 │   7   8   9  10  11 │
     │  12  13  14  15  16 | 17            18 |  19  20  21  22  23 │
     │  24  25  26  27  28 │ 29            30 │  31  32  33  34  35 │
     ╰───────────╮  38  39 │ 40 44      42 43 │  44  45 ╭───────────╯
          36  37 ╰─────────╯                  ╰─────────╯  46  47
*/

#pragma once

#define LT4  0  // left-top row
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

#define LTA  5
#define RTA  6  // right-top row

#define RT0  7
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11


#define LM4 12  // left-middle row
#define LM3 13
#define LM2 14
#define LM1 15
#define LM0 16

#define LMA 17
#define RMA 18  // right-middle row


#define RM0 19
#define RM1 20
#define RM2 21
#define RM3 22
#define RM4 23


#define LB4 24  // left-bottom row
#define LB3 25
#define LB2 26
#define LB1 27
#define LB0 28

#define LBA 29
#define RBA 30  // right-bottom row

#define RB0 31
#define RB1 32
#define RB2 33
#define RB3 34
#define RB4 35

#define LH4 36  // left thumb keys
#define LH3 37
#define LH2 38
#define LH1 39
#define LH0 40

#define LHA 41
#define RHA 42  // right thumb keys

#define RH0 43
#define RH1 44
#define RH2 45
#define RH3 46
#define RH4 47

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LTA LM0 LM1 LM2 LM3 LM4 LMA LB0 LB1 LB2 LB3 LB4 LBA // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RTA RM0 RM1 RM2 RM3 RM4 RBA RB0 RB1 RB2 RB3 RB4 RBA // right-hand keys
#define THUMBS LH4 LH3 LH2 LH1 LH0 LHA RH0 RH1 RH2 RH3 RH4 RHA                         // thumb keys
