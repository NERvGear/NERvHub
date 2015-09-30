## Making The Home for A Plug-in

You have to create a folder which is named after your plug-in for each plug-in you want to publish in `NERvHub\plugin`.

## Defining A Plug-in

> The demo plug-in is defined in `NERvHub\plugin\Demo Extension\PDemoExtension.h`.

To document a new plug-in, what you need is just to write one single header with plug-in ID declaration and Doxygen comments.

The class name of a plug-in should be started with a 'P' character and must distinguish from other plug-ins already existed.

Here's an example header for `Demo::PDemoExtension` plug-in:

```CPP
#ifndef DEMO_PDEMOEXTENSION_H
#define DEMO_PDEMOEXTENSION_H
```
Define header guard macro in form _NAMESPACE_ + _PLUGIN_NAME_ + `_H` in upper case.
```CPP
#include <NERvGear/component/CPlugin.h>
```
Include this essential header for all plug-ins.
```CPP
namespace Demo {
```
Start the enclosing namespace. Note that the plug-ins(and plug-in IDs) should be defined in the custom namespace.  
(Optional) You can also use the `\declns{1}` command to force doxygen generating a separate page for a namespace.

The doxygen document starts from here using the `/// ` style comment.
```
/// \ingroup mod_plugin
///
```
Use the `\ingroup` command to group a plug-in into NERvhub plug-ins document page.  
Ends with an empty line.
```
/// \plugin Demo::PDemoExtension
```
Use the `\plugin` command to declare a plug-in, full namespace required.
```
/// \extends NERvGear::OPlugin
```
Use the `\extends` command to declare inheritance information, full namespace required. A plug-in always extends from `NERvGear::OPlugin`.
```
/// \brief A demo plug-in.
///
```
Use the `\brief` command to start the brief for a plug-in.  
Ends with an empty line.
```
/// Detailed description for the plug-in.
///
```
(Optional) Start your detailed description for a plug-in here.  
Ends with an empty line.  
(Optional) You can also use the `\note` command to start your nodes, ends with an empty line.  
(Optional) Here's the reference of doxygen [Special Commands](http://www.stack.nl/~dimitri/doxygen/manual/commands.html).
```
/// \provideobj{Demo Extension}
/// - Demo::ODemo (implements NERvGear::ETC::CDemo)
///
```
Use the `\provideobj{1}` command to list all objects provided by this plug-in. 
Ends with an empty line.
```
/// \see
///     N/A
///
```
Use the `\see` command to link some other relative plug-ins, objects, interfaces, functions, URL, etc. Other developers can append more resources in this section to improve relevance and convenience.  
Ends with an empty line.
```
/// \version 1.0.0
///     Initial release.
///
```
Use the `\version` command for each version to list the revision information for a plug-in.  
Ends with an empty line.
```
/// \depend{Nerve Gear API 1}
```
Use the `\depend{1}` command to declare the dependencies for a plug-in, use `\n` to separate each dependency item.
```
/// \module{Plugins\\Demo Extension\\MODULE.DLL}
```
Use the `\module{1}` command to declare the plug-in module file.

```
/// \declid{Plugin,Demo::ID_PDemoExtension,A0590A27-BA5B-4298-AF86-7B1C32C2BF9A}
```
Use the `\declid{3}` to bind an ID to the plug-in. The 1st parameter is constant 'Plugin', the 2nd parameter is the plug-in ID variable with full namespace, the 3rd parameter is the ID string.  
This should be the last line of a plug-in doxygen document.
```CPP
NVG_DEFINE_UID(ID_PDemoExtension, 0xA0590A27, 0xBA5B, 0x4298, 0xAF, 0x86, 0x7B, 0x1C, 0x32, 0xC2, 0xBF, 0x9A); ///< A0590A27-BA5B-4298-AF86-7B1C32C2BF9A
```
Use `NVG_DEFINE_UID()` macro to declare the plug-in ID, you can use the `guidgen.exe` tool to generate IDs. Note that the first section of a plug-in ID should be replaced by a _CATALOG_ enumeration value.
```CPP
} // Demo
```
End enclosing namespace.
```CPP
#endif // DEMO_PDEMOEXTENSION_H
```
The end of the header guard.

## Publishing A Plug-in

If you want your updates or plug-in notification get pushed to the SAO Utils users, you have to:

1. Release the binary data to the `NERvHub\plugin\_YOUR_PLUGIN_FOLDER_\bin` folder.
2. Fill the update information into the `NERvHub\plugin\_YOUR_PLUGIN_FOLDER_\update.xml` file.
3. Commit and push to NERvHub.

We will notify the users about your updates or new plug-ins during a particular period of time.
