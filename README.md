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
## [**Hands Down**](https://sites.google.com/alanreiser.com/handsdown) variations

| HD variation | Thumb Alpha<sup>[1]</sup> | H-Digraphs<sup>[2]</sup> | Adaptives<sup>[3]</sup> | Vim<sup>[4]</sup> | Avail? |
| :--- | :---: | :---: | :---: | :---: | :---: |
| [***Promethium***](https://github.com/moutis/zmk-config/blob/main/config/handsdown/pm-config.h) | R |   |   | ✔ | ✔ | 
| [***Rhodium***](https://github.com/moutis/zmk-config/blob/main/config/handsdown/rh-config.h) | R |   |   |   | ✔ | 
| [***Titanium***](https://github.com/moutis/zmk-config/blob/main/config/handsdown/ti-config.h) | R | ✔ | ✔ |   | ✔ | 
| [***Vibranium***](https://github.com/moutis/zmk-config/blob/main/config/handsdown/vf-config.h) ([Vf](https://github.com/moutis/zmk-config/blob/main/config/handsdown/vf-config.h),[Vb](https://github.com/moutis/zmk-config/blob/main/config/handsdown/vb-config.h),[Vx](https://github.com/moutis/zmk-config/blob/main/config/handsdown/vx-config.h),[Vv](https://github.com/moutis/zmk-config/blob/main/config/handsdown/vv-config.h)) | R | ✔ | ✔ |   | ✔ | 
| [***Neu***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.ze4kq734zl5w) | — |   | ✔ |   |   | 
| [***Gold***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.8i2msuo3butx) | T | ✔ | ✔ |   |   | 

 <sup>[1]</sup> Requires split keyboard with at least 2 thumb keys per side. <br>
 <sup>[2]</sup> **H-digraph combos** (`TH`,`CH`,`WH`,`SH`,`GH`,`PH` bigrams) are expected in the design of this layout. It can be used without the H-digraph combos, but that would add more burden to the H-pinky. Layouts not designed expecting the H-digraphs can still work with them, and they are defined in the configuration files. <br>
 <sup>[3]</sup> [*Adaptive Keys*](https://sites.google.com/alanreiser.com/handsdown#h.ps4itorhjiq9) are recommended to further improve an already great layout (*removing more SFBs, scissors, etc.*). `WM` becomes `LM`, `GM`/`MG` -> `GL`/`LG` (\**Magic* keys are a type of Adaptive, restricted to one key. I have, effectivey, many \**Magic* keys at strategic locations around the keyboard.) Adaptives use urob's slick [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) module.<br>
 <sup>[4]</sup> *Vim Friendly* variations were designed with VIM in mind, especially the navigation letters. Other layouts can work with VIM, especially with a separate nav layer.<br>

 - Many combos for less-used letters (`Qu`,`Z`,) editing (`Undo`, `Cut`, `Copy`, `Paste`, `Tab`, etc.), symbols and punctuation (`@`,`!`,`?`,`;`,`:`,`=` etc.).
 - [***Comma Magic***](https://github.com/moutis/zmk-config/blob/9628259185a4271353cf477db80fd703a6a2eb51/config/moutis/moutis_behaviors.dtsi#L403C1-L442C1) is very snappy use of Adaptive Keys to eliminate the shift misfires common with home row mods. Simply type `COMMA` immediately before an alpha to capitalize it (*deleting the comma*). Linger/Hold on comma for CapsLk, Double-tap comma for CAPS_WORD. It doesn't require a dedicated key for all this; it just works by exploiting a well-established pattern in how a comma is used, never immediatly preceding a letter, and never repeated. It works nearly flawlessly for me.

 - [***Linger Keys***](https://sites.google.com/alanreiser.com/handsdown#h.w8doktr0rzce) (*via hold-tap behaviors and macros*) for things like paired symbols like `{([<>])}` and diacritics `éèôåō`, and more.

Currently building only for Mac only (*hard coded for gui instead of ctrl, and some Mac specific keycodes*), because I use this mainly with my iPads and phone when I'm on the road. My [***Semantic Keys***](https://sites.google.com/alanreiser.com/handsdown#h.7mehnxbqcx2s) feature for platform independence works on my QMK implementations, but isn't yet fully fleshed out and will require more invasive work for ZMK, so this is for later. *I'll probably deal with this with a separate platform layer and macro parameters…this will take time. I'm stupid busy currently.*

## Keyboards & form-factors:

- [**Ahokore**](https://store.dez.li/product/ahokore/) (*Sweet unibody 3x5+3 from down under*)
- [**Bad Wings** *Slim*](https://www.reddit.com/r/ErgoMechKeyboards/comments/16huy9s/thin_is_in/) (*Wafer thin unsplit 3x5+3*)
- [**Corne-ish** *Zen*](https://www.reddit.com/r/ErgoMechKeyboards/comments/reyulp/my_new_zen/) (*Sublime portable split 3x5+3*)
- [**Dust**](https://kbd.news/Dust-keyboard-1789.html) (*Bad Wings re-split 3x5+3*)
- [**Kyria**](https://splitkb.com/products/kyria-rev3) (*3x5+5*)
- [**Microdox**](https://old.boardsource.xyz/store/5f2e7e4a2902de7151494f92) (3x5+3)
- [**Naked48**](https://www.littlekeyboards.com/products/naked48led-keyboard-kit) (*Like [Planck](https://drop.com/buy/planck-mechanical-keyboard), 4x12 but wide*)
- [**Zaphod**](https://www.reddit.com/r/ErgoMechKeyboards/comments/1130oor/zaphod_in_café_society/) (*Peak unibody 3x5+2 at the end of the world*)
<!-- - [**KLOR**](https://github.com/GEIGEIGEIST/KLOR) 
- [**Totem**]()
-->
 
 *Select any HD alpha layout by editing just one line.*

## Thanks:
- Of course, huge thanks to [**Pete Johanson**](https://github.com/petejohanson) *and contributors* for ZMK ([***why not consider sponsoring Pete***](https://github.com/sponsors/petejohanson)?)
- and for the exquisite [Zaphod](https://github.com/petejohanson/zaphod-config) board design.
- [urob](https://github.com/urob/) for the excellent [behavior-adaptive-key](https://github.com/urob/zmk-adaptive-key/) module.
- [jcmkk3](https://github.com/jcmkk3) for the idea to implement adaptives via sticky layers that worked until proper solutions were made.
- many others on the [**Hands Down** Discord](https://discord.gg/BC3fzb2E) for the endless creativity and support.
- [Darryldh (lowprokb)](https://github.com/LOWPROKB) for the sublime [Corne-ish Zen](https://github.com/LOWPROKB/zmk-config-Corne-ish-Zen) board.
- Also thanks to [caksoylar](https://github.com/caksoylar)/Bravekarma on the [ZMK Discord](https://discord.gg/HXWA39qJKX) for the great keymap visualization tool, [keymap drawer](https://github.com/caksoylar/keymap-drawer) used to make the keymap images below, and a lot of help with some implementations (*consider sponsoring them, too, for all their work maturing ZMK*?). And for other individual help.
