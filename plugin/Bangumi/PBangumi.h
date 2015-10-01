
/***************************************************************
 * Name:      PBangumi.h
 * Purpose:   Defines Bangumi Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PBANGUMI_H
#define GPBETA_PBANGUMI_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PBangumi
/// \extends NERvGear::OPlugin
///
/// \brief Displays daily animation list widget on desktop.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Bangumi\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PBangumi,D0525A9F-96B2-46E7-73AF-F4A786249A96}

// Plug-in ID
NVG_DEFINE_UID(ID_PBangumi, 0xD0525A9F, 0x96B2, 0x46E7, 0x73, 0xAF, 0xF4, 0xA7, 0x86, 0x24, 0x9A, 0x96); ///< D0525A9F-96B2-46E7-73AF-F4A786249A96

} // GPBeta

#endif // GPBETA_PBANGUMI_H
