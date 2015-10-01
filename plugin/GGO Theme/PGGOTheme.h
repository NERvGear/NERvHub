
/***************************************************************
 * Name:      PGGOTheme.h
 * Purpose:   Defines GGO Theme Plug-in
 * Author:    GPBeta ()
 * Created:   2015-09-28
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef GPBETA_PGGOTHEME_H
#define GPBETA_PGGOTHEME_H

#include <NERvGear/component/CPlugin.h>

namespace GPBeta {

/// \ingroup mod_plugin
///
/// \plugin GPBeta::PGGOTheme
/// \extends NERvGear::OPlugin
///
/// \brief Gun Gale Online theme.
///
/// \provideobj{GGO Theme}
/// - GPBeta::OGGOTheme (implements NERvGear::UI::CTheme)
///
/// \version 1.0.0
///     Initial release.
///
/// \depend{Nerve Gear API 1}
/// \module{Plugins\\GGOTheme\\MODULE.DLL}
/// \declid{Plugin,GPBeta::ID_PGGOTheme,6962B3C1-DF50-4D8A-8BB0-425A64E81DCA}

// Plug-in ID
NVG_DEFINE_UID(ID_PGGOTheme, 0x6962B3C1, 0xDF50, 0x4D8A, 0x8B, 0xB0, 0x42, 0x5A, 0x64, 0xE8, 0x1D, 0xCA); ///< 6962B3C1-DF50-4D8A-8BB0-425A64E81DCA

} // GPBeta

#endif // GPBETA_PGGOTHEME_H
