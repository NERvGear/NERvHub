
/***************************************************************
 * Name:      PCardinalSystem.h
 * Purpose:   Defines Cardinal System Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PCARDINALSYSTEM_H
#define GPBETA_PCARDINALSYSTEM_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PCardinalSystem
/// \extends NERvGear::OPlugin
///
/// \brief YUI-MHCP001 navigation pixie.
///
/// Currently only pops up some useful skill tips and information.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Cardinal System\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PCardinalSystem,61430000-6472-6E69-616C-53797374656D}

// Plug-in ID
NVG_DEFINE_UID(ID_PCardinalSystem, 0x61430000, 0x6472, 0x6E69, 0x61, 0x6C, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D); ///< 'CardinalSystem'

} // GPBeta

#endif // GPBETA_PCARDINALSYSTEM_H
