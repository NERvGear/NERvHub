
/***************************************************************
 * Name:      IDemo.h
 * Purpose:   Defines Demo Interface
 * Author:    GPBeta ()
 * Created:   2015-09-30
 * Copyright: GPBeta ()
 * License:
 **************************************************************/

#ifndef DEMO_IDEMO_H
#define DEMO_IDEMO_H

#include <NERvGear/interface/IUnknown.h>

namespace Demo {

/// \ingroup mod_itf_hub
///
/// \brief Demo interface.
///
/// Detailed description for the interface.
///
/// \remark
///     Remarks for the interface
///
/// \see
///     N/A
///
/// \declid{Interface,Demo::ID_IDemo,6869424C-F29F-45BF-87DF-63AD8067942B}
NVG_INTERFACE_EXTEND(IDemo, NERvGear::IUnknown) {

    /// A demo method.
    ///
    /// Detailed description for the method.
    ///
    /// \param [in]  str A pointer to a null terminated string.
    /// \return
    ///     Returns an error code.
    /// \retval S_OK   Success.
    /// \retval E_FAIL Fail.
    ///
    /// \remark
    ///     Remarks for the method
    ///
    /// \see
    ///     N/A
    virtual long NVG_METHOD FooBar(const wchar_t* str) NVG_PURE;

};


// Interface ID
NVG_DEFINE_UID(ID_IDemo, 0x6869424C, 0xF29F, 0x45BF, 0x87, 0xDF, 0x63, 0xAD, 0x80, 0x67, 0x94, 0x2B); ///< 6869424C-F29F-45BF-87DF-63AD8067942B


} // Demo

#endif // DEMO_IDEMO_H
