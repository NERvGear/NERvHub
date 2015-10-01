
/***************************************************************
 * Name:      PMailBox.h
 * Purpose:   Defines Mail Box Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PMAILBOX_H
#define GPBETA_PMAILBOX_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PMailBox
/// \extends NERvGear::OPlugin
///
/// \brief A POP3 and SMTP E-Mail client.
///
/// \provideobj{Mail Box}
/// - GPBeta::OMailActionFilter (implements NERvGear::CActionFilter)
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Mail Box\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PMailBox,00B7D2DA-F0DD-485C-8AA0-DEC7388E2376}

// Plug-in ID
NVG_DEFINE_UID(ID_PMailBox, 0x00B7D2DA, 0xF0DD, 0x485C, 0x8A, 0xA0, 0xDE, 0xC7, 0x38, 0x8E, 0x23, 0x76); ///< 00B7D2DA-F0DD-485C-8AA0-DEC7388E2376

} // GPBeta

#endif // GPBETA_PMAILBOX_H
