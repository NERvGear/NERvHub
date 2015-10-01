
/***************************************************************
 * Name:      CDemo.h
 * Purpose:   Defines Demo Component
 * Author:    GPBeta ()
 * Created:   2015-09-29
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef NVG_ETC_CDEMO_H
#define NVG_ETC_CDEMO_H

#include <NERvGear/component/CUnknown.h>

namespace NERvGear {

namespace ETC {

/// \ingroup mod_com_etc
///
/// \component NERvGear::ETC::CDemo
/// \extends NERvGear::CUnknown
/// \brief Do something cool.
///
/// I don't exactly know how to do, but please do it as cool as possible.
///
/// \implguide
///     Objects that implement this component should provide a Demo::IDemo interface.
///
/// \see
///     N/A
///
/// \declid{Component,NERvGear::ID_CDemo,ETC-A63C-4B33-9826-0567701F6431}

// Component ID
NVG_DEFINE_UID(ID_CDemo, CATALOG::ETC, 0xA63C, 0x4B33, 0x98, 0x26, 0x05, 0x67, 0x70, 0x1F, 0x64, 0x31); ///< ETC-A63C-4B33-9826-0567701F6431

} // ETC

} // NERvGear

#endif // NVG_ETC_CDEMO_H
