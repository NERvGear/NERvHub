## Making The Home for An Interface

If this is the first time you commit an interface to NERvHub, you have to create a folder named after your _USERNAME_ or a unique custom _NAMESPACE_ in `NERvHub\interface`, then you can commit all your interfaces inside it.

## Publishing An Interface

> The demo interface is defined in `NERvHub\interface\Demo\IDemo.h`.

To define and publish an interface, what you need is just to write one single header with interface and ID declaration and Doxygen comments.

The interface's name should be started with an 'I' character and must distinguish from other interfaces in the same namespace.

Here's an example header for `Demo::IDemo` interface:

```CPP
#ifndef DEMO_IDEMO_H
#define DEMO_IDEMO_H
```
Define header guard macro in form _NAMESPACE_ + _INTERFACE_NAME_ + `_H` in upper case.
```CPP
#include <NERvGear/interface/IUnknown.h>
```
Include the header of parent interface. 
```CPP
namespace Demo {
```
Start the enclosing namespace. Note that the interfaces(and interface IDs) should be defined in the custom namespace.  
(Optional) You can also use the `\declns{1}` command to force doxygen generating a separate page for a namespace.

The doxygen document starts from here using the `/// ` style comment.
```
/// \ingroup mod_itf_hub
///
```
Use the `\ingroup` command to group an interface into NERvhub interfaces document page.  
Ends with an empty line.
```
/// \brief Demo interface.
///
```
Use the `\brief` command to start the brief for an interface.  
Ends with an empty line.
```
/// Detailed description for the interface.
///
```
(Optional) Start your detailed description for an interface here.  
Ends with an empty line.
```
/// \remark
///     Remarks for the interface
/// 
```
(Optional) You can also use the `\remark` command to start your remarks.  
Ends with an empty line.  
(Optional) Here's the reference of doxygen [Special Commands](http://www.stack.nl/~dimitri/doxygen/manual/commands.html).
```
/// \see
///     N/A
///
```
(Optional) Use the `\see` command to link some other relative interfaces, interfaces, interfaces, functions, URL, etc. Other developers can append more resources in this section to improve relevance and convenience.  
Ends with an empty line.
```
/// \declid{Interface,Demo::ID_IDemo,6869424C-F29F-45BF-87DF-63AD8067942B}
```
Use the `\declid{3}` to bind an ID to the interface. The 1st parameter is constant 'Interface', the 2nd parameter is the interface ID variable with full namespace, the 3rd parameter is the ID string.  
This should be the last line of an interface doxygen document.
```CPP
NVG_INTERFACE_EXTEND(IDemo, IUnknown) {
```
Use the `NVG_INTERFACE_EXTEND(_CLASS, _BASE)` macro to start declaring an interface.
```
    /// A demo method.
    ///
```
Start the brief for an interface method at the first line of the document.  
Ends with an empty line.
```
    /// Detailed description for the method.
    ///
```
(Optional) Start the detailed description for an interface method.  
Ends with an empty line.
```
    /// \param [in]  str A pointer to a null terminated string.
```
(Optional) Use the `\param` command to document a parameter of an interface method.
```
    /// \return
    ///     Returns an error code.
```
(Optional) Use the `\return` command to document the meanning of the values returned from an interface method,
Ends with an empty line or a `\retval` command.
```
    /// \retval S_OK   Success.
    /// \retval E_FAIL Fail.
```
(Optional) Use the `\retval` command to document a possible return value of an interface method.
Ends with an empty line.
```
    /// \remark
    ///     Remarks for the method
    ///
```
(Optional) Use the `\remark` command to start your remarks for an interface method.  
Ends with an empty line.
```
    /// \see
    ///     N/A
```
(Optional) Use the `\see` command to link some other relative interfaces, interfaces, interfaces, functions, URL, etc.  
Ends with an empty line.
```
    virtual long NVG_METHOD FooBar(const wchar_t* str) NVG_PURE;
```
Declare an interface method, it is recommended that an interface method should return a `long` type error code according to the COM standard. Note that the `virtual`, `NVG_METHOD` and `NVG_PURE` keywords are essential to declare interface methods.
```CPP
};
```
Ends interface declaration.
```CPP
NVG_DEFINE_UID(ID_IDemo, 0x6869424C, 0xF29F, 0x45BF, 0x87, 0xDF, 0x63, 0xAD, 0x80, 0x67, 0x94, 0x2B); ///< 6869424C-F29F-45BF-87DF-63AD8067942B
```
Use `NVG_DEFINE_UID()` macro to declare the interface ID, you can use the `guidgen.exe` tool to generate IDs.
```CPP
} // Demo
```
End enclosing namespace.
```CPP
#endif // DEMO_IDEMO_H
```
The end of the header guard.
