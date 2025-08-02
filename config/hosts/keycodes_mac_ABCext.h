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
 * Avoid using any hard-coded mod+keycodes
 * in the keymap, as they may not work
 * the same on other hosts/layouts.
 *
 * This really needs to be fully abstracted.
 * Maybe when proper platform independence is factored in
 * with something like my Symantic Keys in QMK.
 *
 * Consider the unicode chars approach in urob's
 * ZMK helpers: include/zmk-helpers/unicode-chars
 *
 * Below is for Mac US extended (ABC - Extended) keyboard layout
 */
 
// Editing commands
#define DWRDL   LA(BSPC)            // delete word left
#define DWRDR   LA(DEL)             // delete word right

// Navigation
#define NWRDL   LA(LEFT)            // Word left
#define NWRDR   LA(RIGHT)           // Word right
#define NPARU   LA(UP)              // Paragraph Up
#define NPARD   LA(UP)              // Paragraph Down
#define NDTOP   LG(UP)              // Top of document
#define NDBOT   LG(DOWN)            // Bottom of document



// Smart Quotes (pairs, single & double)
#define LSQUO   LA(RBKT)            // “ left double quote
#define RSQUO   LS(LA(RBKT))        // ” right double quote
#define LDQUO   LA(LBKT)            // ’ left single quote
#define RDQUO   LS(LA(LBKT))        // ’ right single quote

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

// Typographical symbols
#define SPARA   LA(N7)              // ¶
#define SCROS   LA(LS(N5))          // †
#define SDCRS   LA(LS(N7))          // ‡
#define SSECT   LA(N5)              // §
#define SBBLT   LA(N8)              // • Bold Bullet
#define SDEGR   LA(LS(N8))          // ° Degree
#define SSBLT   LA(LS(N9))          // · Small Bullet

