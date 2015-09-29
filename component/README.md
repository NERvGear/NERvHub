## Choosing The Home for A Component

You can place and classify your components in different folders and catalogs according to the components' purposes:

| Catalogs          | Namespaces         | Pages            | Folders                      |
| ----------------  | ------------------ | ---------------- | ---------------------------- |
| CATALOG::SYSTEM   | NERvGear::System   | mod_com_system   | NERvHub\\component\\System   |
| CATALOG::SECURITY | NERvGear::Security | mod_com_security | NERvHub\\component\\Security |
| CATALOG::NETWORK  | NERvGear::Network  | mod_com_network  | NERvHub\\component\\Network  |
| CATALOG::DESKTOP  | NERvGear::Desktop  | mod_com_desktop  | NERvHub\\component\\Desktop  |
| CATALOG::GRAPHIC  | NERvGear::Graphic  | mod_com_graphic  | NERvHub\\component\\Graphic  |
| CATALOG::VIDEO    | NERvGear::Video    | mod_com_video    | NERvHub\\component\\Video    |
| CATALOG::AUDIO    | NERvGear::Audio    | mod_com_audio    | NERvHub\\component\\Audio    |
| CATALOG::ETC      | NERvGear::ETC      | mod_com_etc      | NERvHub\\component\\ETC      |

If you want to define a new catalogs, please [open a new issue](https://github.com/NERvGear/NERvSDK/issues) for the NERvSDK with title:

> [QUEST]New Catalog (_YOUR_CATALOG_HERE_)

## Defining A Component

> The demo component is defined in `NERvHub\component\ETC\CDemo.h`.

To define and publish a new component, what you need is just to write one single header with component ID declaration and Doxygen comments.

The component's name should be started with a 'C' character and must distinguish from other components in the same catalog.

Here's an example header for `NERvGear::ETC::CDemo` component:

```CPP
#ifndef NVG_ETC_CDEMO_H
#define NVG_ETC_CDEMO_H
```
Define header guard macro in form `NVG_` + _CATALOG_ + _COMPONENT_NAME_ + `_H` in upper case.
```CPP
#include <NERvGear/component/CUnknown.h>
```
Include this essential header for general components.
```CPP
namespace NERvGear {

namespace ETC {
```
Start the enclosing namespace. Note that the components(and component IDs) should be defined in the _CATALOG_ namespace inside `NERvGear`, available namespaces are list in previous section.

The doxygen document starts from here using the `/// ` style comment.
```
/// \ingroup mod_com_etc
///
```
Use the `\ingroup` command to group a component into different document pages, the component page names are in form `mod_com_` + _CATALOG_ in lower case, available pages are list in previous section.  
Ends with an empty line.
```
/// \component NERvGear::ETC::CDemo
```
Use the `\component` command to declare a component, full namespace required.
```
/// \extends NERvGear::CUnknown
```
Use the `\extends` command to declare inheritance information. In general, a component  extends from `NERvGear::CUnknown`, if your component is defined basing on another component, it can extend other components too.
```
/// \brief Do something cool.
///
```
Use the `\brief` command to start the brief for a component.  
Ends with an empty line.
```
/// I don't exactly know how to do, but please do it as cool as possible.
///
```
(Optional) Start your detailed description for a component here.  
Ends with an empty line.  
(Optional) You can also use the `\note` command to start your nodes, ends with an empty line.  
(Optional) Here's the reference of doxygen [Special Commands](http://www.stack.nl/~dimitri/doxygen/manual/commands.html).
```
/// \implguide
///     Objects that implement this component should provide a Demo::IDemo interface.
///
```
Use the `\implguide` command to start the implementation guides for a component.  
You can specify interfaces or write down some implementation details in this section.   
Ends with an empty line.
```
/// \see
///     N/A
///
```
Use the `\see` command to link some other relative components, objects, interfaces, functions, URL, etc. Other developers can append more resources in this section to improve relevance and convenience.  
Ends with an empty line.
```
/// \declid{Component,NERvGear::ETC::ID_CDemo,ETC-A63C-4B33-9826-0567701F6431}
```
Use the `\declid{3}` to bind an ID to the component. The 1st parameter is constant 'Component', the 2nd parameter is the component ID variable with full namespace, the 3rd parameter is the ID string.  
This should be the last line of a component doxygen document.
```CPP
NVG_DEFINE_UID(ID_CDemo, CATALOG::ETC, 0xA63C, 0x4B33, 0x98, 0x26, 0x05, 0x67, 0x70, 0x1F, 0x64, 0x31); ///< ETC-A63C-4B33-9826-0567701F6431
```
Use `NVG_DEFINE_UID()` macro to declare the component ID, you can use the `guidgen.exe` tool to generate IDs. Note that the first section of a component ID should be replaced by a _CATALOG_ enumeration value.
```CPP
} // ETC

} // NERvGear
```
End enclosing namespace.
```CPP
#endif // NVG_ETC_CDEMO_H
```
The end of the header guard.
