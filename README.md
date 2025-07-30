# [**Hands Down**](http://handsdownlayout.com) on ![zen pic](images/zenlogo.png)

![zen pic](images/zen.jpg)

My personal ZMK take on [**Hands Down**](http://handsdownlayout.com) on small portable boards.

**Hands Down** *Vibranium-Vf*
```
╭─────────────────────╮ ╭──────────────────────╮
│  X   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
│  S   C   N   T   K  | |  ,;   A   E   I   H  │
│  F   P   L   D   V  │ │  -+   U   O   Y   B  │
╰──────╮  App BSP  R  │ │  SPC RET nLk  ╭──────╯
       ╰──────────────╯ ╰───────────────╯
```
**Hands Down** *Promethium*
```
╭─────────────────────╮ ╭──────────────────────╮
│  V   W   G   M   J  │ │  #$  .:  /*  "<  '>  │
│  S   N   T   H   K  | |  ,;   A   E   I   C  │
│  F   P   D   L   X  │ │  -+   U   O   Y   B  │
╰──────╮  App BSP  R  │ │  SPC RET nLk  ╭──────╯
       ╰──────────────╯ ╰───────────────╯
```
### Definitions exist for:
- [***Promethium***](https://www.reddit.com/r/KeyboardLayouts/comments/1g66ivi/hands_down_promethium_snth_meets_hd_silverengram/) (*Alan's "bottom heavy" mod*)
- [***Rhodium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.bv3bay1cp21z)
- [***Titanium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.wc98dpulr54c)
- [***Vibranium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) (mods *Vf, Vb, Vx, Vv*)
 
In the works (*I test the builds on several boards, with adaptives & combos*):
- [***Neu***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.ze4kq734zl5w)
- [***Gold***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.8i2msuo3butx)

**Nearly everything is working**:
 - Many combos for less-used letters (`Qu`,`Z`,) editing (`Undo`, `Cut`, `Copy`, `Paste`, `Tab`, etc.), symbols and punctuation (`@`,`!`,`?`,`;`,`:`,`=` etc.).
 - **`H` digraph combos** *(* `TH`,`CH`,`WH`,`SH`,`GH`,`PH` *bigrams*), and pronouns (`I `, `I've `, `you'll`, `we'd`, etc. ).
 - [***Adaptive Keys***](https://sites.google.com/alanreiser.com/handsdown#h.ps4itorhjiq9) are now using urob's slick [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) to further improve an already great layout (*removing more SFBs, scissors, etc.*), 
 - [***Comma-cap***](https://www.reddit.com/r/KeyboardLayouts/comments/1cc2yri/oneshot_shift_via_adaptive_keys/) is very snappy using Adaptive keys. Comma immediately before a letter will capitalize it (deleting the comma). Linger/Hold on comma for CapsLk, Double-tap comma for CAPS_WORD. It's nearly perfect, and greatly reduces the need for Home Row shift (eliminating the most pesky HRM issue). And it doesn't require any dedicated key for all this. It just works, by exploiting a well-established pattern in how a comma is used, always followed by a space. (*you can't really capitalize a number, so it's ignored.*) 
 - [***Linger Keys***](https://sites.google.com/alanreiser.com/handsdown#h.w8doktr0rzce) (via macros, and hold-tap behaviors) for things like paired symbols like `{([<>])}` and diacritics `éèôåō`, and more.
 - My ZMK boards are almost indistinguishable from QMK now.

Currently building only for Mac only (*hard coded for gui instead of ctrl, and some Mac specific keycodes*), because I use this mainly with my iPads and phone when I'm on the road. My [***Semantic Keys***](https://sites.google.com/alanreiser.com/handsdown#h.7mehnxbqcx2s) feature for platform independence works on my QMK implementations, but isn't yet fully fleshed out and will require more invasive work for ZMK, so this too is for later. *I'll probably deal with this with a separate platform layer and macro parameters…this will take time. I'm stupid busy currently.*

### Templates for many popular keyboards/form-factors:
- [**Corne-ish** *Zen*](https://www.reddit.com/r/ErgoMechKeyboards/comments/reyulp/my_new_zen/) (*Sublime portable split*)
- [**Zaphod**](https://www.reddit.com/r/ErgoMechKeyboards/comments/1130oor/zaphod_in_café_society/) (*Peak unibody at the end of the world*)
- [**Bad Wings** *Slim*](https://www.reddit.com/r/ErgoMechKeyboards/comments/16huy9s/thin_is_in/) (*Wafer thin unsplit*)
- [**Dust**](https://kbd.news/Dust-keyboard-1789.html) (*Bad Wings re-split*)
- [**Naked48**](https://www.littlekeyboards.com/products/naked48led-keyboard-kit) (*Like [Planck](https://drop.com/buy/planck-mechanical-keyboard), but wide*)
- [**Microdox**](https://old.boardsource.xyz/store/5f2e7e4a2902de7151494f92)
- [**Kyria**](https://splitkb.com/products/kyria-rev3) (*3x5*)
<!-- - [**KLOR**](https://github.com/GEIGEIGEIST/KLOR) 
- [**Totem**]()
-->
### Mix and match any HD alpha layout with any supported board by editing just a few lines.

## Thanks:
- Of course, huge thanks to [**Pete Johanson**](https://github.com/petejohanson) *and contributors* for ZMK ([***why not consider sponsoring Pete***](https://github.com/sponsors/petejohanson)?)
- and for the exquisite [Zaphod](https://github.com/petejohanson/zaphod-config) board design.
- [urob](https://github.com/urob/) for the excellent [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) module.
- [jcmkk3](https://github.com/jcmkk3) for the idea to implement adaptives via sticky layers that worked until proper solutions were made.
- many others on the [**Hands Down** Discord](https://discord.gg/BC3fzb2E) for the endless creativity and support.
- [Darryldh (lowprokb)](https://github.com/LOWPROKB) for the sublime [Corne-ish Zen](https://github.com/LOWPROKB/zmk-config-Corne-ish-Zen) board.
- Also thanks to [caksoylar](https://github.com/caksoylar)/Bravekarma on the [ZMK Discord](https://discord.gg/HXWA39qJKX) for the great keymap visualization tool, [keymap drawer](https://github.com/caksoylar/keymap-drawer) used to make the keymap images below, and a lot of help with some implementations (*consider sponsoring them, too, for all their work maturing ZMK*?). And for other individual help.
