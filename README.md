# [**Hands Down**](http://handsdownlayout.com) on ![zen pic](images/zenlogo.png)
My personal ZMK take on [**Hands Down**](http://handsdownlayout.com) on small portable boards.
![zen pic](images/zen.jpg)

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
### Hands Down variations

|   Layout   | Thumb Alpha<sup>[1]</sup> | H-Digraphs<sup>[2]</sup> | Adaptives<sup>[3]</sup> | Vim | Avail? |
| :--- | :---: | :---: | :---: | :---: | :---: |
| [***Promethium***](https://www.reddit.com/r/KeyboardLayouts/comments/1g66ivi/hands_down_promethium_snth_meets_hd_silverengram/) | R | ~ | ~ | ✔ | ✔ |
| [***Rhodium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.bv3bay1cp21z) | R | ~ | ~ | ✔ | ✔ |
| [***Titanium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.wc98dpulr54c) | R | ~ | ~ | ✔ | ✔ |
| [***Vibranium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) | R | ~ | ~ | ✔ | ✔ |
| [***Neu***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.ze4kq734zl5w) | none | ~ | ~ | ✔ |   |
| [***Gold***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.8i2msuo3butx) | none | T | ~ | ✔ |   |

<sup>[1]</sup> Requires split keyboard with at least 2 thumb keys. 
<sup>[2]</sup> **`H` digraph combos** *(* `TH`,`CH`,`WH`,`SH`,`GH`,`PH` *bigrams*), and pronouns (`I `, `I've `, `you'll`, `we'd`, etc. ).  
<sup>[3]</sup> [***Adaptive Keys***](https://sites.google.com/alanreiser.com/handsdown#h.ps4itorhjiq9) are now using urob's slick [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) module to further improve an already great layout (*removing more SFBs, scissors, etc.*). `WM` becomes `LM`, `GM`/`MG` -> `GL`/`LG` (\**Magic* keys are a type of Adaptive, restricted to one key. I have, effectivey, many \**Magic* keys at strategic locations around the keyboard.)  

 - Many combos for less-used letters (`Qu`,`Z`,) editing (`Undo`, `Cut`, `Copy`, `Paste`, `Tab`, etc.), symbols and punctuation (`@`,`!`,`?`,`;`,`:`,`=` etc.).
 - [***Comma-cap***](https://www.reddit.com/r/KeyboardLayouts/comments/1cc2yri/oneshot_shift_via_adaptive_keys/) is very snappy using Adaptive Keys. `Comma` immediately before an alpha will capitalize it (deleting the comma). Linger/Hold on comma for CapsLk, Double-tap comma for CAPS_WORD. It's nearly perfect, and greatly reduces the need for home row shift (eliminating the most pesky HRM issue). It doesn't require a dedicated key for all this–It just works by exploiting a well-established pattern in how a comma is used, never immediatly preceding a letter.
 - [***Linger Keys***](https://sites.google.com/alanreiser.com/handsdown#h.w8doktr0rzce) (*via hold-tap behaviors and macros*) for things like paired symbols like `{([<>])}` and diacritics `éèôåō`, and more.

Currently building only for Mac only (*hard coded for gui instead of ctrl, and some Mac specific keycodes*), because I use this mainly with my iPads and phone when I'm on the road. My [***Semantic Keys***](https://sites.google.com/alanreiser.com/handsdown#h.7mehnxbqcx2s) feature for platform independence works on my QMK implementations, but isn't yet fully fleshed out and will require more invasive work for ZMK, so this is for later. *I'll probably deal with this with a separate platform layer and macro parameters…this will take time. I'm stupid busy currently.*

### Templates for many popular keyboards & form-factors:
- [**Corne-ish** *Zen*](https://www.reddit.com/r/ErgoMechKeyboards/comments/reyulp/my_new_zen/) (*Sublime portable split 3x5+3*)
- [**Zaphod**](https://www.reddit.com/r/ErgoMechKeyboards/comments/1130oor/zaphod_in_café_society/) (*Peak unibody 3x5+2 at the end of the world*)
- [**Bad Wings** *Slim*](https://www.reddit.com/r/ErgoMechKeyboards/comments/16huy9s/thin_is_in/) (*Wafer thin unsplit 3x5+3*)
- [**Dust**](https://kbd.news/Dust-keyboard-1789.html) (*Bad Wings re-split 3x5+3*)
- [**Naked48**](https://www.littlekeyboards.com/products/naked48led-keyboard-kit) (*Like [Planck](https://drop.com/buy/planck-mechanical-keyboard), 4x12 but wide*)
- [**Microdox**](https://old.boardsource.xyz/store/5f2e7e4a2902de7151494f92) (3x5+3)
- [**Kyria**](https://splitkb.com/products/kyria-rev3) (*3x5+5*)
<!-- - [**KLOR**](https://github.com/GEIGEIGEIST/KLOR) 
- [**Totem**]()
-->
 
 *Mix and match any supported HD alpha layout and keyboard by editing just a few lines.*

## Thanks:
- Of course, huge thanks to [**Pete Johanson**](https://github.com/petejohanson) *and contributors* for ZMK ([***why not consider sponsoring Pete***](https://github.com/sponsors/petejohanson)?)
- and for the exquisite [Zaphod](https://github.com/petejohanson/zaphod-config) board design.
- [urob](https://github.com/urob/) for the excellent [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) module.
- [jcmkk3](https://github.com/jcmkk3) for the idea to implement adaptives via sticky layers that worked until proper solutions were made.
- many others on the [**Hands Down** Discord](https://discord.gg/BC3fzb2E) for the endless creativity and support.
- [Darryldh (lowprokb)](https://github.com/LOWPROKB) for the sublime [Corne-ish Zen](https://github.com/LOWPROKB/zmk-config-Corne-ish-Zen) board.
- Also thanks to [caksoylar](https://github.com/caksoylar)/Bravekarma on the [ZMK Discord](https://discord.gg/HXWA39qJKX) for the great keymap visualization tool, [keymap drawer](https://github.com/caksoylar/keymap-drawer) used to make the keymap images below, and a lot of help with some implementations (*consider sponsoring them, too, for all their work maturing ZMK*?). And for other individual help.
