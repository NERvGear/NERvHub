
/***************************************************************
 * Name:      ODemo.h
 * Purpose:   Defines Demo Object
 * Author:    Demo ()
 * Created:   2015-09-30
 * Copyright: Demo ()
 * License:
 **************************************************************/

#ifndef DEMO_ODEMO_H
#define DEMO_ODEMO_H

#include <NERvHub/component/ETC/CDemo.h>
#include <NERvHub/interface/Demo/IDemo.h>

namespace Demo {

/// \ingroup mod_obj_hub
///
/// \object Demo::ODemo
/// \extends NERvGear::OUnknown
/// \implements NERvGear::ETC::CDemo
/// \implements Demo::IDemo
///
/// \brief Demo component implementation.
///
/// Prints a very cool string when calling IDemo::FooBar().
/// An extra string specified in \a str parameter will also be printed in a new line.
///
/// \note
///     All strings will be printed to std output.
/// 
/// \see
///     N/A
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PDemoExtension Demo Extension\endlink 1.0.0 and above}
/// \module{Plugins\\Demo Extension\\MODULE.DLL}
/// \declid{Object,Demo::ID_ODemo,DF330D56-1C67-44E8-9E45-EA4C9EE908F4}


// Object ID
NVG_DEFINE_UID(ID_ODemo, 0xDF330D56, 0x1C67, 0x44E8, 0x9E, 0x45, 0xEA, 0x4C, 0x9E, 0xE9, 0x08, 0xF4); ///< DF330D56-1C67-44E8-9E45-EA4C9EE908F4


} // Demo

#endif // DEMO_ODEMO_H
