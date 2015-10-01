
/***************************************************************
 * Name:      PHPBar.h
 * Purpose:   Defines HP-Bar Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PHPBAR_H
#define GPBETA_PHPBAR_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PHPBar
/// \extends NERvGear::OPlugin
///
/// \brief Displays custom data with Sword Art Online UI on desktop.
///
/// Allows user to pick up data values provided by objects implementing the NERvGear::CDataSource component,
/// then displays each value as a bar inside a desktop widget.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\HP-Bar\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PHPBar,C75B0728-7736-43DE-8AF7-B1C9F071CF17}

// Plug-in ID
NVG_DEFINE_UID(ID_PHPBar, 0xC75B0728, 0x7736, 0x43DE, 0x8A, 0xF7, 0xB1, 0xC9, 0xF0, 0x71, 0xCF, 0x17); ///< C75B0728-7736-43DE-8AF7-B1C9F071CF17

} // GPBeta

#endif // GPBETA_PHPBAR_H
