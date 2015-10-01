
/***************************************************************
 * Name:      PWeatherDataExtension.h
 * Purpose:   Defines Weather Data Extension Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PWEATHERDATAEXTENSION_H
#define GPBETA_PWEATHERDATAEXTENSION_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PWeatherDataExtension
/// \extends NERvGear::OPlugin
///
/// \brief Provides weather data.
///
/// \provideobj{%Weather Data Extension}
/// - GPBeta::OWeatherDataSource (implements NERvGear::CDataSource)
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\%Weather Data Extension\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PWeatherDataExtension,4DD45DDE-1F97-4E13-A35E-E29E05ADC78D}

// Plug-in ID
NVG_DEFINE_UID(ID_PWeatherDataExtension, 0x4DD45DDE, 0x1F97, 0x4E13, 0xA3, 0x5E, 0xE2, 0x9E, 0x05, 0xAD, 0xC7, 0x8D); ///< 4DD45DDE-1F97-4E13-A35E-E29E05ADC78D

} // GPBeta

#endif // GPBETA_PWEATHERDATAEXTENSION_H
