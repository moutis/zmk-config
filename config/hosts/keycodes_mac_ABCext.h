//
//  keycodes_mac_ABCext.h
//  
//
//  Created by Alan on 7/31/25.
//


/*
 * #define compound keycodes
 *
 * keycodes_mac_ABCext.h
 *
 * Avoid using any hard-coded mod/keycodes.
 *
 * This really needs to be fully abstracted.
 * Maybe when proper platform independence is factored in
 * with something like my Symantic Keys in QMK.
 *
 * Consider the unicode chars approach in urob's
 * ZMK helpers: include/zmk-helpers/unicode-chars
 *
 * Below is for Mac US extended keyboard layout
 */
 
// Smart Quotes (pairs, single & double)
#define LSQUO   LA(RBKT)            // “
#define RSQUO   LS(LA(RBKT))        // ”
#define LDQUO   LA(LBKT)            // ’
#define RDQUO   LS(LA(LBKT))        // ’

// French Quotes / chevrons (pairs, single & double)
#define LDCHEV  LA(BACKSLASH)       // «
#define RDCHEV  LA(LS(BACKSLASH))   // «
#define LSCHEV  LA(LS((N3)))        // ‹
#define RSCHEV  LA(LS((N4)))        // ›

// Currency
#define CEURO   LA(N2)              // €
#define CBPND   LA(N3)              // £
#define CJPY    LA(Y)               // ¥
#define CCENT   LA(N4)              // ¢
