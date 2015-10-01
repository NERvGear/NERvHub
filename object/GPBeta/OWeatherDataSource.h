
/***************************************************************
 * Name:      OWeatherDataSource.h
 * Purpose:   Defines Weather Data Source Object
 * Author:    GPBeta ()
 * Created:   2015-09-26
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_OWEATHERDATASOURCE_H
#define GPBETA_OWEATHERDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

namespace GPBeta {

/// \ingroup mod_obj_hub
///
/// \object GPBeta::OWeatherDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief %Weather data source implementation.
///
/// Available data, value and IDs:
/// - General Data
///   - Data UID: GPBeta::Weather::ID_GENERAL
///   - Data Values: GPBeta::Weather::GENERAL::VALUE
/// - UV Data
///   - Data UID: GPBeta::Weather::ID_UV
///   - Data Values: GPBeta::Weather::UV::VALUE
/// - Wind Data
///   - Data UID: GPBeta::Weather::ID_WIND
///   - Data Values: GPBeta::Weather::WIND::VALUE
/// - Pressure Data
///   - Data UID: GPBeta::Weather::ID_PRESS
///   - Data Values: GPBeta::Weather::PRESS::VALUE
///
/// All of the value types are fixed and indicated by the prefix of their IDs.
/// 
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PWeatherDataExtension Weather Data Extension\endlink 1.0.0 and above}
/// \module{Plugins\\Sensor %Weather Extension\\MODULE.DLL}
/// \declid{Object,GPBeta::ID_OWeatherDataSource,52A2372B-6F05-4CC3-BF39-9B839E36D3FA}

/// \declns{GPBeta::Weather}
namespace Weather {

/// \declns{GPBeta::Weather::GENERAL}
namespace GENERAL {

/// \brief General data value IDs.
enum VALUE {
    STR_FORECAST,
    I32_CURRENT_TEMP,
    I32_FEELLIKE_TEMP,
    I32_DEW_POINT,
    U32_HUMIDITY,
    F32_VISIBILITY
};


} // GENERAL

/// \declns{GPBeta::Weather::UV}
namespace UV {

/// \brief UV data value IDs.
enum VALUE {
    STR_LEVEL,
    U32_INDEX
};


} // UV

/// \declns{GPBeta::Weather::WIND}
namespace WIND {

/// \brief Wind data value IDs.
enum VALUE {
    STR_DIRECT,
    U32_DEGREES,
    U32_SPEED,
    U32_GUST
};


} // WIND

/// \declns{GPBeta::Weather::PRESS}
namespace PRESS {

/// \brief Pressure data value IDs.
enum VALUE {
    STR_TREND,
    F32_BAROMETRIC
};


} // PRESS

NVG_DEFINE_UID(ID_GENERAL, 0xB75FED10, 0x201B, 0x4467, 0xBA, 0x89, 0xBE, 0xDA, 0x41, 0x8D, 0x4F, 0xF1); ///< B75FED10-201B-4467-BA89-BEDA418D4FF1
NVG_DEFINE_UID(ID_UV,      0x562789EE, 0x9C33, 0x4CA0, 0x9F, 0xC1, 0x3A, 0xDF, 0x73, 0x9C, 0x28, 0x2C); ///< 562789EE-9C33-4CA0-9FC1-3ADF739C282C
NVG_DEFINE_UID(ID_WIND,    0x6BD68A3D, 0x787A, 0x418D, 0xAC, 0xAD, 0x9A, 0x18, 0x3E, 0xF4, 0xF5, 0x17); ///< 6BD68A3D-787A-418D-ACAD-9A183EF4F517
NVG_DEFINE_UID(ID_PRESS,   0xFF25E1E2, 0x69B0, 0x465E, 0xA2, 0x81, 0x55, 0x08, 0xF9, 0x3A, 0xFE, 0x37); ///< FF25E1E2-69B0-465E-A281-5508F93AFE37

} // Weather


// Object ID
NVG_DEFINE_UID(ID_OWeatherDataSource, 0x52A2372B, 0x6F05, 0x4CC3, 0xBF, 0x39, 0x9B, 0x83, 0x9E, 0x36, 0xD3, 0xFA); ///< 52A2372B-6F05-4CC3-BF39-9B839E36D3FA


} // GPBeta

#endif // GPBETA_OWEATHERDATASOURCE_H
