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
 
//
#define KILL_M  LG(LA(ESCAPE))      // KILL app (Mac)
#define KILL_W  LC(LA(DEL))         // KILL (win)

// Editing commands
#define DWRDL   LA(BSPC)            // delete word left
#define DWRDR   LA(DEL)             // delete word right
#define UNDO    RG(Z)               // Undo
#define CUT     RG(X)               // Cut
#define COPY    RG(C)               // Copy
#define PASTE   RG(V)               // Paste
#define PSTEM   RG(RA(RS(V)))       // Paste-Match
#define CLOSE   RG(W)               // Close Window
#define QUIT    RG(Q)               // Quit
#define FIND    RG(F)               // Find
#define FAGN    RG(G)               // Find Again
#define ScrCp   LG(LS(N4))          // copy screen to clipboard
#define SelCp   LG(LS(LC(N4)))      // copy screen selection to clipboard

// Navigation
#define NWRDL   LA(LEFT)            // Word left
#define NWRDR   LA(RIGHT)           // Word right
#define NPARU   LA(UP)              // Paragraph Up
#define NPARD   LA(DOWN)            // Paragraph Down
#define NDTOP   LG(UP)              // Top of document
#define NDBOT   LG(DOWN)            // Bottom of document
#define B_BACK  LG(LBKT)            // Browser Back
#define B_NEXT  LG(RBKT)            // Browser Forward
#define ZOOMIN  LG(MINUS)           // Zoom In
#define ZOOMOUT LG(EQUAL)           // Zoom Out
#define ZOOMRST LG(N0)              // Zoom Reset
#define AppNxt  LG(TAB)             // APP switcher Next (last used)
#define AppPrv  LG(LS(TAB))         // APP switcher Prev (least recently used)

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
#define CEURO   LA(LS(N2))          // €
#define CBPND   LA(N3)              // £
#define CJPY    LA(Y)               // ¥
#define CCENT   LA(N4)              // ¢

// Typographical symbols
#define SNDSH   LA(MINUS)           // – N Dash
#define SMDSH   LA(LS(MINUS))       // — M Dash
#define SPARA   LA(N7)              // ¶
#define SCROS   LA(LS(N5))          // †
#define SDCRS   LA(LS(N7))          // ‡
#define SSECT   LA(N5)              // §
#define SBBLT   LA(N8)              // • Bold Bullet
#define SDEGR   LA(LS(N8))          // ° Degree
#define SSBLT   LA(LS(N9))          // · Small Bullet
#define STM     LA(N2)              // ™ Trademark
#define SREG    LA(R)               // ® Registered

// Math Symbols
#define SNEQL   LA(EQUAL)           // ≠ Not Equal
#define SPLMN   LA(LS(MINUS))       // ± Plus/Minus
#define SDPCT   LA(LS(R))           // ‰ Double zero Percent

