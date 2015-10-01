
/***************************************************************
 * Name:      OSpeedFanDataSource.h
 * Purpose:   Defines SpeedFan Data Source Object
 * Author:    GPBeta ()
 * Created:   2015-09-26
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_OSPEEDFANDATASOURCE_H
#define GPBETA_OSPEEDFANDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

namespace GPBeta {

/// \ingroup mod_obj_hub
///
/// \object GPBeta::OSpeedFanDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief Data source implementation for %SpeedFan.
///
/// Available data, value and IDs:
/// - Temperature Data
///   - Data UID: GPBeta::SpeedFan::ID_TEMP
///   - Data Values: Each value represents a device's temperature, use NERvGear::IData::GetValueCount() to retrieve available device amount.
/// - Fan Speed Data
///   - Data UID: GPBeta::SpeedFan::ID_SPEED
///   - Data Values: Each value represents a fan's speed, use NERvGear::IData::GetValueCount() to retrieve available fan amount.
/// - Voltage Data
///   - Data UID: GPBeta::SpeedFan::ID_VOLT
///   - Data Values: Each value represents a device's volt, use NERvGear::IData::GetValueCount() to retrieve available device amount.
///
/// All of the value types are fixed and indicated by the prefix of their IDs.
/// 
/// \note
///     The meaning of each value will changes along with different devices, see %SpeedFan's document for more information. 
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PSensorDataExtension Sensor Data Extension\endlink 1.0.0 and above}
/// \module{Plugins\\Sensor Data Extension\\MODULE.DLL}
/// \declid{Object,GPBeta::ID_OSpeedFanDataSource,5F6D2964-B60E-485E-9983-77F3B6439EDA}

/// \declns{GPBeta::SpeedFan}
namespace SpeedFan {

NVG_DEFINE_UID(ID_TEMP,  0xFB617A26, 0x657D, 0x4E12, 0xB7, 0x1F, 0x97, 0x59, 0x41, 0x23, 0x8D, 0xE7); ///< FB617A26-657D-4E12-B71F-975941238DE7
NVG_DEFINE_UID(ID_SPEED, 0xDC0B6851, 0xCAC3, 0x44B6, 0xAC, 0xC3, 0x08, 0xD3, 0x6E, 0x73, 0x04, 0xA5); ///< DC0B6851-CAC3-44B6-ACC3-08D36E7304A5
NVG_DEFINE_UID(ID_VOLT,  0x6BD68A3D, 0x787A, 0x418D, 0xAC, 0xAD, 0x9A, 0x18, 0x3E, 0xF4, 0xF5, 0x17); ///< 6BD68A3D-787A-418D-ACAD-9A183EF4F517

} // SpeedFan


// Object ID
NVG_DEFINE_UID(ID_OSpeedFanDataSource, 0x5F6D2964, 0xB60E, 0x485E, 0x99, 0x83, 0x77, 0xF3, 0xB6, 0x43, 0x9E, 0xDA); ///< 5F6D2964-B60E-485E-9983-77F3B6439EDA


} // GPBeta

#endif // GPBETA_OSPEEDFANDATASOURCE_H
