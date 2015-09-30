## Making The Home for An Object

If this is the first time you commit an object to NERvHub, you have to create a folder named after your _USERNAME_ or a unique custom _NAMESPACE_ in `NERvHub\object`, then you can commit all your objects inside it.

## Publishing An Object

> The demo object is defined in `NERvHub\object\Demo\ODemo.h`.

To implement and publish a new object, what you need is just to write one single header with object ID declaration and Doxygen comments.

The object's name should be started with an 'O' character and must distinguish from other objects in the same namespace.

Here's an example header for `Demo::ODemo` object:

```CPP
#ifndef DEMO_ODEMO_H
#define DEMO_ODEMO_H
```
Define header guard macro in form _NAMESPACE + _OBJECT_NAME_ + `_H` in upper case.
```CPP
#include <NERvHub/component/ETC/CDemo.h>
#include <NERvHub/interface/Demo/IDemo.h>
```
Include the headers of the component and interfaces to be implemented, then there's no necessary to include them manually for the clients of this object.
```CPP
namespace Demo {
```
Start the enclosing namespace. Note that the objects(and object IDs) should be defined in the custom namespace.  
(Optional) You can also use the `\declns` command to force doxygen generate a separate page for a namespace.

The doxygen document starts from here using the `/// ` style comment.
```
/// \ingroup mod_obj_hub
///
```
Use the `\ingroup` command to group an object into NERvhub objects document page.  
Ends with an empty line.
```
/// \object Demo::ODemo
```
Use the `\object` command to declare an object, full namespace required.
```
/// \extends NERvGear::OUnknown
```
Use the `\extends` command to declare inheritance information, full namespace required. In general, an object extends from `NERvGear::OUnknown`, if your object is [aggregating another object](https://msdn.microsoft.com/en-us/library/windows/desktop/ms686558), it can extend other objects too.
```
/// \implements NERvGear::ETC::CDemo
/// \implements Demo::IDemo
```
Use the `implements` command to declare implementation information, full namespace required. In general, an object must implement a component and at least one interface.
```
/// \brief Demo component implementation.
///
```
Use the `\brief` command to start the brief for an object.  
Ends with an empty line.
```
/// Prints a very cool string when calling IDemo::FooBar().
/// An extra string specified in \a str parameter will also be printed in a new line.
///
```
(Optional) Start your detailed description for a object here.  
Ends with an empty line.
```
/// \note
///     All strings will be printed to std output.
/// 
```
(Optional) You can also use the `\note` command to start your nodes.  
Ends with an empty line.  
(Optional) Here's the reference of doxygen [Special Commands](http://www.stack.nl/~dimitri/doxygen/manual/commands.html).
```
/// \see
///     N/A
///
```
Use the `\see` command to link some other relative objects, objects, interfaces, functions, URL, etc. Other developers can append more resources in this section to improve relevance and convenience.  
Ends with an empty line.
```
/// \version 1.0.0
///     Initial release.
///
```
Use the `\version` command for each version to list the revision information for a object.  
Ends with an empty line.
```
/// \depend{\link PDemoPlugin Demo Plug-in\endlink 1.0.0 and above}
```
Use the `\depend{1}` command to declare the dependencies for an object, use `\n` to separate each dependency item. You can also use the `\link` and `\endlink` command to link another object, so that developers can access the document of that object easily.
```
/// \module{Plugins\\Demo Plug-in\\MODULE.DLL}
```
Use the `\module{1}` command to declare the module providing this object.
```
/// \declid{Object,Demo::ID_ODemo,DF330D56-1C67-44E8-9E45-EA4C9EE908F4}
```
Use the `\declid{3}` to bind an ID to the object. The 1st parameter is constant 'Object', the 2nd parameter is the object ID variable with full namespace, the 3rd parameter is the ID string.  
This should be the last line of an object doxygen document.
```CPP
NVG_DEFINE_UID(ID_ODemo, 0xDF330D56, 0x1C67, 0x44E8, 0x9E, 0x45, 0xEA, 0x4C, 0x9E, 0xE9, 0x08, 0xF4); ///< DF330D56-1C67-44E8-9E45-EA4C9EE908F4
```
Use `NVG_DEFINE_UID()` macro to declare the object ID, you can use the `guidgen.exe` tool to generate IDs.
```CPP
} // Demo
```
End enclosing namespace.
```CPP
#endif // DEMO_ODEMO_H
```
The end of the header guard.
