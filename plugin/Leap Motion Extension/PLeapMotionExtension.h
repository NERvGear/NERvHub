
/***************************************************************
 * Name:      PLeapMotionExtension.h
 * Purpose:   Defines Leap Motion Extension Plug-in
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_PLEAPMOTIONEXTENSION_H
#define RANGERCD_PLEAPMOTIONEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace RangerCD {

/// \ingroup mod_plugin
///
/// \plugin RangerCD::PLeapMotionExtension
/// \extends NERvGear::OPlugin
///
/// \brief Provides basic Leap Motion support.
///
/// \provideobj{Leap Motion Extension}
/// - None
///
/// \version 0.0.3-pre
///     - Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Leap Motion Extension\\MODULE.DLL}
/// \declid{Plugin,RangerCD::ID_PLeapMotionExtension,5BB77959-379E-4aa8-8D11-993296E84CC3}

// Plug-in ID
NVG_DEFINE_UID(ID_PLeapMotionExtension, 0x5bb77959, 0x379e, 0x4aa8, 0x8d, 0x11, 0x99, 0x32, 0x96, 0xe8, 0x4c, 0xc3); ///< 5BB77959-379E-4aa8-8D11-993296E84CC3

} // RangerCD

#endif // RANGERCD_PLEAPMOTIONEXTENSION_H
