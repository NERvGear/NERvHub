
/***************************************************************
 * Name:      PSensorDataExtension.h
 * Purpose:   Defines Sensor Data Extension Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PSENSORDATAEXTENSION_H
#define GPBETA_PSENSORDATAEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PSensorDataExtension
/// \extends NERvGear::OPlugin
///
/// \brief Provides sensor data.
///
/// \provideobj{Sensor Data Extension}
/// - GPBeta::OCoreTempDataSource (implements NERvGear::CDataSource)
/// - GPBeta::OSpeedFanDataSource (implements NERvGear::CDataSource)
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Sensor Data Extension\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PSensorDataExtension,CDA48885-4D37-40BF-B474-511B28DE4EDD}

// Plug-in ID
NVG_DEFINE_UID(ID_PSensorDataExtension, 0xCDA48885, 0x4D37, 0x40BF, 0xB4, 0x74, 0x51, 0x1B, 0x28, 0xDE, 0x4E, 0xDD); ///< CDA48885-4D37-40BF-B474-511B28DE4EDD

} // GPBeta

#endif // GPBETA_PSENSORDATAEXTENSION_H
