
/***************************************************************
 * Name:      OImageActionFilter.h
 * Purpose:   Defines Image Action Filter Object
 * Author:    GPBeta ()
 * Created:   2015-09-27
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_OIMAGEACTIONFILTER_H
#define GPBETA_OIMAGEACTIONFILTER_H

#include <NERvGear/component/CActionFilter.h>
#include <NERvGear/interface/IExecute.h>

namespace GPBeta {

/// \ingroup mod_obj_hub
///
/// \object GPBeta::OImageActionFilter
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CActionFilter
/// \implements NERvGear::IExecute
///
/// \brief Image action filter implementation.
///
/// Handles NERvGear::EXEC::FILE actions which the command represents a path to the image file,
/// provides an image preview allowing the user to open the image externally.\n
/// NERvGear::IExecute::Invoke() returns S_FALSE if success, E_FAIL if the file format is not supported.\n
/// Here's a list of images that is supported by the filter:
/// - Static Images: *.png, *.jpg, *.bmp
/// - Icon Images: *.ico
/// - Animation Images: *.gif
///
/// \note
///     The filter only handle image actions when the launcher is showing.
/// 
/// \version 1.0.0
///     Initial release.
///
/// \depend{\link PImageWidget Image Widget\endlink 1.0.0 and above}
/// \module{Plugins\\Image Widget\\MODULE.DLL}
/// \declid{Object,GPBeta::ID_OImageActionFilter,F8713FA2-8666-442A-9F5E-9BEA047B747A}


// Object ID
NVG_DEFINE_UID(ID_OImageActionFilter, 0xF8713FA2, 0x8666, 0x442A, 0x9F, 0x5E, 0x9B, 0xEA, 0x04, 0x7B, 0x74, 0x7A); ///< F8713FA2-8666-442A-9F5E-9BEA047B747A


} // GPBeta

#endif // GPBETA_OIMAGEACTIONFILTER_H
