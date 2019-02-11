# Sources

<https://www.cprogramming.com/compilingandlinking.html>
<https://stackoverflow.com/questions/6264249/how-does-the-compilation-linking-process-work>
<https://en.wikipedia.org/wiki/C_preprocessor>
<https://en.wikipedia.org/wiki/Linker_(computing)>

# C compilation

1. Preprocessing
2. Compilation
3. Assembly
4. Linking	

## Preprocessing

Preprocessor is separate program invoked by compiler as first part of translation. 

* Inclusion of header files
* Macro expansions
* Conditional compilation
* Line control

### Running it

`gcc -E foo.c`

## Compilation

Produces source code files in assembly language (assuming assembler has not been run).

### Running it

Compiles but does not assemble:

`gcc -S foo.c`

Output is assembly code.

## Assembly

Produces object code in binary (NB: do not confuse assembly code and object code).

The object code contains the compiled code (in binary form) of the symbols defined in the input. Symbols in object files are referred to by name.

Object files can refer to symbols which are not defined (i.e. when a declaration is used without a definition). Object files are segmented into memory segment types. These include the code segment (.text), initialised data segment (.data), uninitialised data segment (.bss), and others.

Static libraries contain object files.

### Running it

Not sure there's a standalone assembler to run on compiler output (i.e. the source code in assembly).

Compiles and assembles:

`gcc -c foo.c`

## Linking

Linking is the creation of a single executable file, library file, or another object file, from multiple object files. Linking replaces references to undefined symbols with the correct addresses. These symbols can be defined in other object files or in libraries. This is the process of symbol resolution.

### Linking in more detail

An object file contains three types of symbol:

* defined 'external' symbols, a.k.a. 'public' or 'entry' symbols, which allow it to be called by other modules
* undefined 'external' symbols, which reference other modules where these symbols are defined
* local symobls, used internally within the object file to facilitate relocation

So object files can reference entities not defined within themselves with external symbols (e.g. variables or functions). Symbol resolution replaces symbolic references and names of libraries with actual usable addresses in memory. These addresses will depend on the location in memory of the code with the external symbols.

The linker is also responsible for arranging objects in a program's address space. This may involve relocating code that assumes a specific base address into another base. Since a compiler seldom knows where an object will reside, it often assumes a fixed base location (e.g. 0). Relocating machine code may involve retargeting of absolute jumps, loads, and stores.

Whereas static libraries are the output of compilation (and assembly), shared/dynamic libraries are the output of linking.

#### Static linking

Static linking is the result of the linker copying all library routines used in the program into the executable image.

#### Dynamic linking

Dynamic linking defers resolution of some undefined symbols until a program is run. The executable code contains undefined symbols and a list of objects or libraries that will provide definitions for these.

#### Relocation

Relocation is the process of assigning load addresses for position-dependent code and data of a program and adjusting the code and data to reflect the assigned addresses.

# Miscellaneous

## Header files

Can use the `-I` flag to specify an include directory, e.g.

`gcc -c -I ../include foo.c`
