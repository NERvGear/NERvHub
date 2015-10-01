
/***************************************************************
 * Name:      OShortcutKeysDataSource.h
 * Purpose:   Defines Shortcut Keys Data Source Object
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_OSHORTCUTKEYSDATASOURCE_H
#define RANGERCD_OSHORTCUTKEYSDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

/// \declns{::RangerCD}
namespace RangerCD {

/// \ingroup mod_obj_hub
///
/// \object RangerCD::OShortcutKeysDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief Data source implementation for keyboard shortcuts.
///
/// Available data, value and IDs:
/// - Custom Shortcut Keys
///   - Data UID: RangerCD::ShortcutKeys::ID_Custom
///   - Data Values: RangerCD::ShortcutKeys::Custom::VALUE
///
/// \version 1.0.0
///     - Initial release.
///
/// \depend{\link PShortcutKeysExtension Shortcut Keys Extension\endlink 0.1.0 and above}
/// \module{Plugins\\Shortcut Keys Extension\\MODULE.DLL}
/// \declid{Object,RangerCD::ID_OShortcutKeysDataSource,70592E22-2B7E-4706-9B78-CDB8FD8C0829}

/// \declns{RangerCD::ShortcutKeys}
namespace ShortcutKeys {

/// \declns{RangerCD::ShortcutKeys::Custom}
namespace Custom {

/// \brief Custom shortcut keys value IDs.
enum VALUE {
	STR_SK_COMBINATION,
};


} // Custom


NVG_DEFINE_UID(ID_Custom, 0xd6cb7cbb, 0xc5b5, 0x4f1c, 0x83, 0xb4, 0xb0, 0x9a, 0x36, 0x2e, 0xd9, 0xbd); ///< D6CB7CBB-C5B5-4f1c-83B4-B09A362ED9BD

} // ShortcutKeys


// Object ID
NVG_DEFINE_UID(ID_OShortcutKeysDataSource, 0x70592e22, 0x2b7e, 0x4706, 0x9b, 0x78, 0xcd, 0xb8, 0xfd, 0x8c, 0x8, 0x29); ///< 70592E22-2B7E-4706-9B78-CDB8FD8C0829


} // RangerCD

#endif // RANGERCD_OSHORTCUTKEYSDATASOURCE_H
