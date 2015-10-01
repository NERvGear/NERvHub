
/***************************************************************
 * Name:      OMailActionFilter.h
 * Purpose:   Defines Mail Action Filter Object
 * Author:    GPBeta ()
 * Created:   2015-09-27
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_OMAILACTIONFILTER_H
#define GPBETA_OMAILACTIONFILTER_H

#include <NERvGear/component/CActionFilter.h>
#include <NERvGear/interface/IExecute.h>

namespace GPBeta {

/// \ingroup mod_obj_hub
///
/// \object GPBeta::OMailActionFilter
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CActionFilter
/// \implements NERvGear::IExecute
///
/// \brief Mail action filter implementation.
///
/// Handles NERvGear::EXEC::URL actions which the command starts with case insensitive 'mailto:' string,
/// provides user a mail composing box to send an E-Mail to the recipient that the protocol command has provided.\n
/// NERvGear::IExecute::Invoke() returns S_OK if success, E_FAIL if fail.
///
/// \note
///     The filter only handle mail actions when essential account information(E-Mail address, user name and password) is presented.
/// 
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PMailBox Mail Box\endlink 1.0.0 and above}
/// \module{Plugins\\Mail Box\\MODULE.DLL}
/// \declid{Object,GPBeta::ID_OMailActionFilter,C20DE17B-F4AC-4B95-80F2-64D4C04CBB1E}


// Object ID
NVG_DEFINE_UID(ID_OMailActionFilter, 0xC20DE17B, 0xF4AC, 0x4B95, 0x80, 0xF2, 0x64, 0xD4, 0xC0, 0x4C, 0xBB, 0x1E); ///< C20DE17B-F4AC-4B95-80F2-64D4C04CBB1E


} // GPBeta

#endif // GPBETA_OMAILACTIONFILTER_H
