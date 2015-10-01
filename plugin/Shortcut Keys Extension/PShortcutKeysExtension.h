
/***************************************************************
 * Name:      PShortcutKeysExtension.h
 * Purpose:   Defines Shortcut Keys Extension Plug-in
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_PSHORTCUTKEYSEXTENSION_H
#define RANGERCD_PSHORTCUTKEYSEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace RangerCD {

/// \ingroup mod_plugin
///
/// \plugin RangerCD::PShortcutKeysExtension
/// \extends NERvGear::OPlugin
///
/// \brief Provides keyboard shortcuts' simulations.
///
/// \provideobj{Shortcut Keys Extension}
/// - RangerCD::OShortcutKeysActionFilter (implements NERvGear::CActionFilter)
/// - RangerCD::OShortcutKeysDataSource (implements NERvGear::CDataSource)
///
/// \version 0.1.0
///     - Initial release.
///     - Provides simulations in DataSource form.
///
/// \version 0.2.0
///     - Provides simulations in ActionFilter form.
///
/// \version 0.2.1
///     - Fixed command failure caused by RangerCD::OShortcutKeysActionFilter.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Shortcut Keys Extension\\MODULE.DLL}
/// \declid{Plugin,RangerCD::ID_PShortcutKeysExtension,380FC664-122D-41fe-B177-F45437BC421D}

// Plug-in ID
NVG_DEFINE_UID(ID_PShortcutKeysExtension, 0x380fc664, 0x122d, 0x41fe, 0xb1, 0x77, 0xf4, 0x54, 0x37, 0xbc, 0x42, 0x1d); ///< 380FC664-122D-41fe-B177-F45437BC421D

} // RangerCD

#endif // RANGERCD_PSHORTCUTKEYSEXTENSION_H
