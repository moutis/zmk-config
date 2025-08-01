/*
 * handsdown.h
 *
 * SPDX-License-Identifier: MIT
 *
 * common configuration defs
 *
 *
 *
 *  which HD alpha variation are we using?
 *
 *  Nu = neu (no thumb alpha)    * RSNT does not use thumb
 *  Au = gold (T on thumb)       * RSND most inward rolling
 *  Ag = silver (L on thumb)     * RSNT LOW sfbs, but high repeat on thumb
 *  Bz = bronze (H on thumb)     * RSNT lightest thumb use w/H-digraph combos
 *  Cr = chromium (C on thumb)   * RSNT typically doesn't use H-digraph combos
 *  Cs = cesium (C on thumb)     * RSNT lowest scissors, – lowest thumb w/o H-digraph combos
 *  Pm = promethium (R on thumb) * SNTH typically doesn't require H-digraph combos
 *  Rh = rhodium (R on thumb)    * SCNT typically doesn't require H-digraph combos
 *  Ti = titanium (R on thumb)   * SCNT predecessor to vibranium. Better pinky balance.
 *  Vf = vibranium (R on thumb, f in lower left, b on right) - SCNT "canonical" best overall V#
 *  Vv = vibranium (R on thumb, v in lower left, f on right) - SCNT lowest SFBs, more inner column/scissors
 *  Vx = vibranium (R on thumb, x in lower left, f on right) - SCNT best pinky balancing, more inner column/scissors
 *  Vb = vibranium (R on thumb, b in lower left, f on right) - CSNT good pinky, mb is a problem
 *  Mi = mithril (R on thumb)
 *  xx = experimental
 *
 */
#ifndef HD_LAYOUT       // this may have been defined in build.yml i.e. cmake-args: -DHANDSDOWN=Pm
#define HD_LAYOUT Pm    // the default HD variation (currently most popular?)
#endif

#define HD_DIR handsdown/
#define HD_CONF -config.h
#define HD_ADPT -adapt.dtsi
#define HD_CMBO -combo.dtsi

#define __xstr(s) #s
#define stringy(s) __xstr(s)

#define HD_config_file   stringy(HD_DIR HD_LAYOUT HD_CONF)
#define HD_adapt_file    stringy(HD_DIR HD_LAYOUT HD_ADPT)
#define HD_combo_file    stringy(HD_DIR HD_LAYOUT HD_CMBO)

#define HD_head_loaded      // tell config we're loaded
#ifndef HD_CONF_loaded      // CONF loaded? (#included directly)
#include HD_config_file     // No, so load it now
#endif
