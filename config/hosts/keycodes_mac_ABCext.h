//
//  keycodes_mac_ABCext.h
//  
//
//  Created by Alan on 7/31/25.
//
#pragma once

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
 * (S_ = "Symantic key")
 *
 * Consider the unicode chars approach in urob's ZMK helpers:
 * https://github.com/urob/zmk-helpers/blob/main/include/zmk-helpers/helper.h
 *
 * Below is for Mac US extended (ABC - Extended) keyboard layout
 */
 
//
#define KILL_M  LG(LA(ESCAPE))      // KILL app (Mac)
#define KILL_W  LC(LA(DEL))         // KILL (win)

// Editing commands
#define S_DWRDL LA(BSPC)            // delete word left
#define S_DWRDR LA(DEL)             // delete word right
#define S_UNDO  RG(Z)               // Undo
#define S_CUT   RG(X)               // Cut
#define S_COPY  RG(C)               // Copy
#define S_PSTE  RG(V)               // Paste
#define S_PSTM  RG(RA(RS(V)))       // Paste-Match
#define S_CLOSE RG(W)               // Close Window
#define S_QUIT  RG(Q)               // Quit
#define S_FIND  RG(F)               // Find
#define S_FAGN  RG(G)               // Find Again
#define S_ScrCp LG(LS(N4))          // copy screen to clipboard
#define S_SelCp LG(LS(LC(N4)))      // copy screen selection to clipboard

// Navigation
#define S_WRDL  LA(LEFT)            // Word left
#define S_WRDR  LA(RIGHT)           // Word right
#define S_PARU  LA(UP)              // Paragraph Up
#define S_PARD  LA(DOWN)            // Paragraph Down
#define S_DTOP  LG(UP)              // Top of document
#define S_DBTM  LG(DOWN)            // Bottom of document
#define S_BBACK LG(LBKT)            // Browser Back
#define S_BFWD  LG(RBKT)            // Browser Forward
#define S_ZMIN  LG(EQUAL)           // Zoom In
#define S_ZMOUT LG(MINUS)           // Zoom Out
#define S_ZMRST LG(N0)              // Zoom Reset
#define S_AppN  LG(TAB)             // APP switcher Next (last used)
#define S_AppP  LG(LS(TAB))         // APP switcher Prev (least recently used)

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
#define C_EURO  LA(LS(N2))          // €
#define C_BPND  LA(N3)              // £
#define C_JPY   LA(Y)               // ¥
#define C_CENT  LA(N4)              // ¢

// Typographical symbols
#define S_NDSH  LA(MINUS)           // – N Dash
#define S_MDSH  LA(LS(MINUS))       // — M Dash
#define S_SECT  LA(N5)              // §
#define S_PARA  LA(N7)              // ¶
#define S_BBLT  LA(N8)              // • Bold Bullet
#define S_SBLT  LA(LS(N9))          // · Small Bullet
#define S_DEGR  LA(LS(N8))          // ° Degree
#define S_CROS  LA(LS(N5))          // †
#define S_DCRS  LA(LS(N7))          // ‡
#define S_TM    LA(N2)              // ™ Trademark
#define S_REG   LA(R)               // ® Registered
#define S_INVQ  LA(LS(FSLH))        // ¿ inverted Question
#define S_INVX  LA(N1)              // ¡ inverted Exclamation

// Math Symbols
#define S_NEQL  LA(EQUAL)           // ≠ Not Equal
#define S_PLMN  LA(LS(MINUS))       // ± Plus/Minus
#define S_DPCT  LA(LS(R))           // ‰ Double zero Percent

