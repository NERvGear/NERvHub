
/***************************************************************
 * Name:      OPdhDataSource.h
 * Purpose:   Defines PDH Data Source Object
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_OPDHDATASOURCE_H
#define RANGERCD_OPDHDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

/// \declns{::RangerCD}
namespace RangerCD {

/// \ingroup mod_obj_hub
///
/// \object RangerCD::OPdhDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief Data source implementation for PDH information.
///
/// Available data, value and IDs:
/// - Processor Information Data
///   - Data UID: RangerCD::PDH::ID_Performance
///   - Data Values: RangerCD::PDH::Performance::VALUE
///
/// All of the value types are fixed and indicated by the prefix of their IDs.
///
/// \version 1.0.0
///     - Initial release.
///
/// \depend{\link PPdhDataExtension Pdh Data Extension\endlink 0.1.6 and above}
/// \module{Plugins\\Pdh Data Extension\\MODULE.DLL}
/// \declid{Object,RangerCD::ID_OPdhDataSource,3BDE05D3-E6D8-412c-BCDD-6154012D6948}

/// \declns{RangerCD::PDH}
namespace PDH {

/// \declns{RangerCD::PDH::Performance}
namespace Performance {

/// \brief Performance information data value IDs.
enum VALUE {
	FLT_PDH_VALUE,
	LNG_PDH_VALUE,
};


} // Performance


NVG_DEFINE_UID(ID_Performance, 0xd02ed35d, 0xcc11, 0x4334, 0x84, 0xff, 0xf2, 0xcf, 0x82, 0x43, 0x12, 0x3a); ///< D02ED35D-CC11-4334-84FF-F2CF8243123A

} // PDH


// Object ID
NVG_DEFINE_UID(ID_OPdhDataSource, 0x3bde05d3, 0xe6d8, 0x412c, 0xbc, 0xdd, 0x61, 0x54, 0x1, 0x2d, 0x69, 0x48); ///< 3BDE05D3-E6D8-412c-BCDD-6154012D6948


} // RangerCD

#endif // RANGERCD_OPDHDATASOURCE_H
