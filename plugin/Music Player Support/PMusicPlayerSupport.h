
/***************************************************************
 * Name:      PMusicPlayerSupport.h
 * Purpose:   Defines Music Player Support Plug-in
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_PMUSICPLAYERSUPPORT_H
#define RANGERCD_PMUSICPLAYERSUPPORT_H

#include <NERvGear/component/CPlugin.h>

namespace RangerCD {

/// \ingroup mod_plugin
///
/// \plugin RangerCD::PMusicPlayerSupport
/// \extends NERvGear::OPlugin
///
/// \brief Provides music player data.
///
/// \provideobj{Music Player Support}
/// - RangerCD::OMusicPlayerDataSource     (implements NERvGear::CDataSource)
///
/// \version 0.0.4-pre
///     - Initial release.
///     - Supports CAD compatible player(Foobar2000 etc.).
///     - Supports NetEase Cloud Music.
///     - Supports universal players.
///     - Supports control action.
///
/// \version 0.0.5-pre
///     - Supports Xiami Music.
///     - Fixed initialization error in Windows 2000.
///     - Fixed data update failure after restart NetEase Cloud Music.
///
/// \version 0.1.0
///     - Supports QQ Music.
///     - Supports Kugou Music.
///     - Added Scrolling Mode.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Music Player Support\\MODULE.DLL}
/// \declid{Plugin,RangerCD::ID_PMusicPlayerSupport,2DF313A1-E3D0-4196-A0B3-03ADF7F12316}

// Plug-in ID
NVG_DEFINE_UID(ID_PMusicPlayerSupport, 0x2df313a1, 0xe3d0, 0x4196, 0xa0, 0xb3, 0x3, 0xad, 0xf7, 0xf1, 0x23, 0x16); ///< 2DF313A1-E3D0-4196-A0B3-03ADF7F12316

} // RangerCD

#endif // RANGERCD_PMUSICPLAYERSUPPORT_H
