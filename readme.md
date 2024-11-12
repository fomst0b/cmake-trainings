
Short summary:
----
You can add new target by add_library() or add_executable()
----
Target can hold multitude different properites like compile definitons,
include directories paths, sources paths etc.
----
To add a property to a target you can use any 'target_*' like function
for example 'target_compile_definitions()'
----
INTERFACE libraries are intended to propagate properties
between targets. For example include directories, compile definitions etc.
----
A library which adds a property (for example include paths) under
the PRIVATE access have exclusive access to that property and can make a use of it.
In the other words if any other library will link to this library 
it won't be able to access those include paths and use it as it's own property.
----
A library which adds a property under the PUBLIC access has an acess to this
property and can make use of it. But it also forwards this property to all other
libraries which links to this specifc one, so those libraries can make use of it too.
----
A library which adds a property under the INTERFACE access can't make a use of it,
but it's able to forward the property to another library and that other library can
make use of it.