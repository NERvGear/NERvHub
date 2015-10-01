
/***************************************************************
 * Name:      PImageWidget.h
 * Purpose:   Defines Image Widget Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PIMAGEWIDGET_H
#define GPBETA_PIMAGEWIDGET_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PImageWidget
/// \extends NERvGear::OPlugin
///
/// \brief Displays image widgets on desktop.
///
/// \provideobj{Image Widget}
/// - GPBeta::OImageActionFilter (implements NERvGear::CActionFilter)
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\Image Widget\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PImageWidget,00000000-4900-616D-6765-576964676574}

// Plug-in ID
NVG_DEFINE_UID(ID_PImageWidget, 0x00000000, 0x4900, 0x616D, 0x67, 0x65, 0x57, 0x69, 0x64, 0x67, 0x65, 0x74); ///< 'ImageWidget'

} // GPBeta

#endif // GPBETA_PIMAGEWIDGET_H
