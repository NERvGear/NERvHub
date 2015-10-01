
/***************************************************************
 * Name:      OCoreTempDataSource.h
 * Purpose:   Defines Core Temp Data Source Object
 * Author:    GPBeta ()
 * Created:   2015-09-26
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_OCORETEMPDATASOURCE_H
#define GPBETA_OCORETEMPDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

/// \declns{::GPBeta}
namespace GPBeta {

/// \ingroup mod_obj_hub
///
/// \object GPBeta::OCoreTempDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief Data source implementation for Core Temp.
///
/// Available data, value and IDs:
/// - Processor Information Data
///   - Data UID: GPBeta::CoreTemp::ID_INFO
///   - Data Values: GPBeta::CoreTemp::INFO::VALUE
/// - CPU Load Data
///   - Data UID: GPBeta::CoreTemp::ID_LOAD
///   - Data Values: Each value represents a CPU core, use NERvGear::IData::GetValueCount() to retrieve CPU core amount.
/// - CPU Temperature Data
///   - Data UID: GPBeta::CoreTemp::ID_TEMP
///   - Data Values: Each value represents a CPU core, use NERvGear::IData::GetValueCount() to retrieve CPU core amount.
/// - CPU Power Data
///   - Data UID: GPBeta::CoreTemp::ID_POWER
///   - Data Values: Each value represents a CPU core, use NERvGear::IData::GetValueCount() to retrieve CPU core amount.
/// - CPU Multiplier Data
///   - Data UID: GPBeta::CoreTemp::ID_MTPR
///   - Data Values: Each value represents a CPU core, use NERvGear::IData::GetValueCount() to retrieve CPU core amount.
///
/// All of the value types are fixed and indicated by the prefix of their IDs.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PSensorDataExtension Sensor Data Extension\endlink 1.0.0 and above}
/// \module{Plugins\\Sensor Data Extension\\MODULE.DLL}
/// \declid{Object,GPBeta::ID_OCoreTempDataSource,F3623F62-F9C0-412A-83D0-B6E7A077DC77}

/// \declns{GPBeta::CoreTemp}
namespace CoreTemp {

/// \declns{GPBeta::CoreTemp::INFO}
namespace INFO {

/// \brief Processor information data value IDs.
enum VALUE {
    STR_CPU_MODULE,
    F32_CPU_SPEED,
    F32_FSB_SPEED,
    U32_CPU_MULTIPLIER,
    F32_CPU_VID,
};


} // INFO


NVG_DEFINE_UID(ID_INFO,  0x3BD97449, 0x1D08, 0x4775, 0xA1, 0x5E, 0xB5, 0x1C, 0xA7, 0x9F, 0x61, 0x25); ///< 3BD97449-1D08-4775-A15E-B51CA79F6125
NVG_DEFINE_UID(ID_LOAD,  0x3543CD0C, 0x685A, 0x493D, 0xB8, 0x32, 0xA3, 0xE2, 0xA6, 0x34, 0x02, 0x97); ///< 3543CD0C-685A-493D-B832-A3E2A6340297
NVG_DEFINE_UID(ID_TEMP,  0x29F77885, 0x8B97, 0x4D92, 0x92, 0x06, 0x89, 0x55, 0xC4, 0xCF, 0x39, 0x8F); ///< 29F77885-8B97-4D92-9206-8955C4CF398F
NVG_DEFINE_UID(ID_POWER, 0xF5D9D591, 0xAE37, 0x49B2, 0x9A, 0x46, 0xEF, 0x98, 0xA2, 0xD4, 0x32, 0x4F); ///< F5D9D591-AE37-49B2-9A46-EF98A2D4324F
NVG_DEFINE_UID(ID_MTPR,  0x41A7A656, 0x97A2, 0x490C, 0xB5, 0xED, 0xAD, 0x43, 0x22, 0xDB, 0x9A, 0x48); ///< 41A7A656-97A2-490C-B5ED-AD4322DB9A48

} // CoreTemp


// Object ID
NVG_DEFINE_UID(ID_OCoreTempDataSource, 0xF3623F62, 0xF9C0, 0x412A, 0x83, 0xD0, 0xB6, 0xE7, 0xA0, 0x77, 0xDC, 0x77); ///< F3623F62-F9C0-412A-83D0-B6E7A077DC77


} // GPBeta

#endif // GPBETA_OCORETEMPDATASOURCE_H
