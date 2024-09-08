//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

/*       KEY POSITIONS for Corne-ish Zen (3x6+3)
    ╭─────────────────────╮ ╭─────────────────────╮
  0 │   1   2   3   4  5  │ │  6   7   8   9  10  │ 11
 12 │  13  14  15  16  17 | | 18  19  20  21  22  │ 23
 24 │  25  26  27  28  29 │ │ 30  31  32  33  34  │ 35
    ╰────────╮ 36  37  38 │ │ 39  40  41 ╭────────╯
             ╰────────────╯ ╰────────────╯
*/
/*    KEY POSITION Names
    ╭─────────────────────╮ ╭─────────────────────╮
LT5 │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │ RT5
LM5 │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │ RM5
LB5 │ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │ RB5
    ╰───────╮ LH3 LH2 LH1 | | RH1 RH2 RH3 ╭───────╯
            ╰─────────────╯ ╰─────────────╯
*/

// define the key names for this board

#define LT0 5
#define LT1 4
#define LT2 3
#define LT3 2
#define LT4 1
#define LT5 0
#define RT0 6
#define RT1 7
#define RT2 8
#define RT3 9
#define RT4 10
#define RT5 11

#define LM0 17
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 29
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24
#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH3 38
#define LH1 36
#define LH2 37
#define RH1 39
#define RH2 40
#define RH3 41

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3                                      // thumb keys