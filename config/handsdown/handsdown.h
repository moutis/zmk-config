/*
 * handsdown.h
 *
 * SPDX-License-Identifier: MIT
 *
 * common configuration defs
 *
 *
 */
//
// which HD alpha variation are we using?
//
//
// nu = neu (no thumb alpha)    * RSNT does not use thumb
// au = gold (T on thumb)       * RSND most inward rolling
// ag = silver (L on thumb)     * RSNT LOW sfbs, but high repeat on thumb
// bz = bronze (H on thumb)     * RSNT lightest thumb use w/H-digraph combos
// cr = chromium (C on thumb)   * RSNT typically doesn't use H-digraph combos
// cs = cesium (C on thumb)     * RSNT lowest scissors, – lowest thumb w/o H-digraph combos
// pm = promethium (R on thumb) * SNTH typically doesn't use H-digraph combos
// rh = rhodium (R on thumb)    * SCNT typically doesn't use H-digraph combos
// ti = titanium (R on thumb)   * SCNT typically doesn't use H-digraph combos
// vf = vibranium (R on thumb, f in lower left, b on right) - SCNT "canonical"
// vv = vibranium (R on thumb, v in lower left, f on right) - SCNT lowest SFBs
// vx = vibranium (R on thumb, x in lower left, f on right) - SCNT better pinky balancing
// vb = vibranium (R on thumb, b in lower left, f on right) - CSNT
// mi = mithril (R on thumb)
// xx = experimental
//
#define stringy(s) #s
#define _FILENAME_(hd, file) stringy("handsdown/" hd file)

#ifndef HANDSDOWN // this may have be defined in build.yml i.e. cmake-args: -HANDSDOWN=Pm
#define HANDSDOWN pm // HD layout variation 2 letter code
#endif

#define HD_config_file  _FILENAME_(HANDSDOWN, "-config.dtsi")
#define HD_adapt_file   _FILENAME_(HANDSDOWN, "-adapt.dtsi")
#define HD_combo_file   _FILENAME_(HANDSDOWN, "-combos.dtsi")
