
/***************************************************************
 * Name:      PQuickLaunch.h
 * Purpose:   Defines Quick Launch Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PQUICKLAUNCH_H
#define GPBETA_PQUICKLAUNCH_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PQuickLaunch
/// \extends NERvGear::OPlugin
///
/// \brief Displays a quick launch button on the top of other windows.
///
/// User can access the launcher menu by simply clicking on the quick launch button.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Quick Launch\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PQuickLaunch,0081D2EF-C1EB-40D4-93C0-04AFE5152DC8}

// Plug-in ID
NVG_DEFINE_UID(ID_PQuickLaunch, 0x0081D2EF, 0xC1EB, 0x40D4, 0x93, 0xC0, 0x04, 0xAF, 0xE5, 0x15, 0x2D, 0xC8); ///< 0081D2EF-C1EB-40D4-93C0-04AFE5152DC8

} // GPBeta

#endif // GPBETA_PQUICKLAUNCH_H
