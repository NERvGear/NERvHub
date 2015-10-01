
/***************************************************************
 * Name:      PGGOWidget.h
 * Purpose:   Defines GGO Widget Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PGGOWIDGET_H
#define GPBETA_PGGOWIDGET_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PGGOWidget
/// \extends NERvGear::OPlugin
///
/// \brief Displays custom data with Gun Gale Online UI on desktop.
///
/// Allows user to pick up data values provided by objects implementing the NERvGear::CDataSource component,
/// then displays each value as an item inside a desktop widget.
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\GGO Widget\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PGGOWidget,C97BE53C-5E9F-4074-BB5B-61616CE53B03}

// Plug-in ID
NVG_DEFINE_UID(ID_PGGOWidget, 0xC97BE53C, 0x5E9F, 0x4074, 0xBB, 0x5B, 0x61, 0x61, 0x6C, 0xE5, 0x3B, 0x03); ///< C97BE53C-5E9F-4074-BB5B-61616CE53B03

} // GPBeta

#endif // GPBETA_PGGOWIDGET_H
