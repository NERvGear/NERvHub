
/***************************************************************
 * Name:      OShortcutKeysActionFilter.h
 * Purpose:   Defines Shortcut Keys Action Filter Object
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-09-30
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_OSHORTCUTKEYSACTIONFILTER_H
#define RANGERCD_OSHORTCUTKEYSACTIONFILTER_H

#include <NERvGear/component/CActionFilter.h>
#include <NERvGear/interface/IExecute.h>

namespace RangerCD {

/// \ingroup mod_obj_hub
///
/// \object RangerCD::OShortcutKeysActionFilter
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CActionFilter
/// \implements NERvGear::IExecute
///
/// \brief Shortcut keys action filter implementation.
///
/// Handles NERvGear::EXEC::URL actions which the command represents keyboard shortcuts,
/// provides a series of keyboard simulations.\n
/// NERvGear::IExecute::Invoke() returns S_OK if success, S_FALSE if the command format is supported but semantically makes no sense, E_FAIL if the command format is not supported.\n
/// Command starts with "keys://" or "快捷键://" is supported.\n
/// A significant command should look like "keys://Win+R". For more information, please visit http://www.debug.moe/sao/shortcut-keys-ext-help
///
/// \version 0.1.0
///     - Initial release.
///
/// \depend{\link PShortcutKeysExtension Shortcut keys Extension\endlink 0.2.0 and above}
/// \module{Plugins\\Shortcut Keys Extension\\MODULE.DLL}
/// \declid{Object,RangerCD::ID_OShortcutKeysActionFilter,0DBB86BD-F69D-417b-9F54-5EC33D6BAB17}


// Object ID
NVG_DEFINE_UID(ID_OShortcutKeysActionFilter, 0xdbb86bd, 0xf69d, 0x417b, 0x9f, 0x54, 0x5e, 0xc3, 0x3d, 0x6b, 0xab, 0x17); ///< 0DBB86BD-F69D-417b-9F54-5EC33D6BAB17


} // RangerCD

#endif // RANGERCD_OSHORTCUTKEYSACTIONFILTER_H
