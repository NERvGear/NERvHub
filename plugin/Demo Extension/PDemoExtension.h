
/***************************************************************
 * Name:      PDemoExtension.h
 * Purpose:   Defines Demo Extension Plug-in
 * Author:    Demo ()
 * Created:   2015-09-30
 * Copyright: Demo ()
 * License:
 **************************************************************/

#ifndef DEMO_PDEMOEXTENSION_H
#define DEMO_PDEMOEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace Demo {

/// \ingroup mod_plugin
///
/// \plugin Demo::PDemoExtension
/// \extends NERvGear::OPlugin
///
/// \brief A demo plug-in.
///
/// Detailed description for the plug-in.
///
/// \provideobj{Demo Extension}
/// - Demo::ODemo (implements NERvGear::ETC::CDemo)
///
/// \see
///     N/A
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Demo Extension\\MODULE.DLL}
/// \declid{Plugin,Demo::ID_PDemoExtension,A0590A27-BA5B-4298-AF86-7B1C32C2BF9A}


// Plug-in ID
NVG_DEFINE_UID(ID_PDemoExtension, 0xA0590A27, 0xBA5B, 0x4298, 0xAF, 0x86, 0x7B, 0x1C, 0x32, 0xC2, 0xBF, 0x9A); ///< A0590A27-BA5B-4298-AF86-7B1C32C2BF9A


} // Demo

#endif // DEMO_PDEMOEXTENSION_H
