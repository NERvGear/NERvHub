
/***************************************************************
 * Name:      PPdhDataExtension.h
 * Purpose:   Defines PDH Data Extension Plug-in
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_PPDHDATAEXTENSION_H
#define RANGERCD_PPDHDATAEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace RangerCD {

/// \ingroup mod_plugin
///
/// \plugin RangerCD::PPdhDataExtension
/// \extends NERvGear::OPlugin
///
/// \brief Provides PDH data.
///
/// \provideobj{Pdh Data Extension}
/// - RangerCD::OPdhDataSource (implements NERvGear::CDataSource)
///
/// \version 0.1.6
///     - Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Pdh Data Extension\\MODULE.DLL}
/// \declid{Plugin,RangerCD::ID_PPdhDataExtension,0C997385-27C7-444d-B1A3-3D75D9CCC479}

// Plug-in ID
NVG_DEFINE_UID(ID_PPdhDataExtension, 0xc997385, 0x27c7, 0x444d, 0xb1, 0xa3, 0x3d, 0x75, 0xd9, 0xcc, 0xc4, 0x79); ///< 0C997385-27C7-444d-B1A3-3D75D9CCC479

} // RangerCD

#endif // RANGERCD_PPDHDATAEXTENSION_H
