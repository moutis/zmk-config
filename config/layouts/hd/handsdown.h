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
 *  nu = neu (no thumb alpha)    * RSNT does not use thumb
 *  au = gold (T on thumb)       * RSND most inward rolling
 *  ag = silver (L on thumb)     * RSNT LOW sfbs, but high repeat on thumb
 *  bz = bronze (H on thumb)     * RSNT lightest thumb use w/H-digraph combos
 *  cr = chromium (C on thumb)   * RSNT typically doesn't use H-digraph combos
 *  cs = cesium (C on thumb)     * RSNT lowest scissors, – lowest thumb w/o H-digraph combos
 *  pm = promethium (R on thumb) * SNTH typically doesn't require H-digraph combos
 *  rh = rhodium (R on thumb)    * SCNT typically doesn't require H-digraph combos
 *  ti = titanium (R on thumb)   * SCNT predecessor to vibranium. Better pinky balance.
 *  vf = vibranium (R on thumb, f in lower left, b on right) - SCNT "canonical" best overall V#
 *  vv = vibranium (R on thumb, v in lower left, f on right) - SCNT lowest SFBs, more inner column/scissors
 *  vx = vibranium (R on thumb, x in lower left, f on right) - SCNT best pinky balancing, more inner column/scissors
 *  vb = vibranium (R on thumb, b in lower left, f on right) - CSNT good pinky, mb is a problem
 *  mi = mithril (R on thumb)
 *  xx = experimental
 *
 */
#ifndef HD_LAYOUT       // this may have been defined in build.yml i.e. cmake-args: -DHANDSDOWN=Pm
#define HD_LAYOUT pm    // the default HD variation (currently most popular?)
#endif

#define HD_DIR layouts/hd/
#define HD_CONF -config.h
#define HD_ADPT -adapt.dtsi
#define HD_CMBO -combo.dtsi

#define __xstr(s) #s
#define stringy(s) __xstr(s)

#define HD_config_file  stringy(HD_DIR HD_LAYOUT HD_CONF)
#define HD_config_loc   stringy(HD_LAYOUT HD_CONF)
#define HD_adapt_file   stringy(HD_DIR HD_LAYOUT HD_ADPT)
#define HD_combo_file   stringy(HD_DIR HD_LAYOUT HD_CMBO)

#define HD_head_loaded TRUE // tell config we're loaded
#ifndef HD_CONF_loaded      // CONF loaded? (#included directly)
#include HD_config_loc      // No, so load it now
#endif
