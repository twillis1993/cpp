# Misc. notes

* Inclusion of `;` at the end of class declaration.
* Necessity of using scoping operator for method definitions in source files.
* Initialiser list syntax.
* No package-level access. Default level of access is private.
* Inlining of concise function defintions to optimise code.
* NULL symbol is an int!!!11!one!
* Public inheritance is the only type 'used in real programs'
* Can pass parameters to superclass constructor using initialiser list
* Multiple inheritance + class with only virtual functions allows one to mimic Java interfaces
* Must declare a function if it is to be overridden later
* Destructors must *always* be declared virtual
* Use virtual keyword in function declaration only
* Pure virtual is the cpp's version of abstract
* Add '=0' after virtual function declaration to make function pure virtual
* Intermediate abstract classes that do not define pure virtual functions need not list them in their header file declaration
* New operator returns a pointer
* Need to use arrow operator on object pointer to access members and methods
* Can initialise instance members of a class using their constructor in the initialiser list
* Need to initialise member references in the initialiser list
* Copy constructor is a thing
* Take care when allocating memory in classes. Safer to allocate in constructor, free in destructor
* Multidimensional arrays may be more efficiently represented as one-dimensional arrays due to the latter's great cache coherency (i.e. new doesn't guarantee contiguous blocks of memory)
* Correct and liberal use of the const keyword can improve efficiency and readability of code
* Don't compare floating point numbers with '=='
* Use doubles as parameters when calling math functions
* When creating an instance with the no-arg constructor, the parentheses must be omitted, e.g. 'Foo myFoo;' not 'Foo myFoo();'. Otherwise one can expect weird compile-time errors.


# Virtual functions

(Mostly from the Wikipedia article)

Virtual functions are inheritable and overridable functions for which dynamic dispatch is facilitated. A virtual function defines a target to be executed, but the target might not be known at compile time. The target is resolved late by calling the most-derived class's implementation of the function according to the actual type, rather than the declared type of the pointer or reference.

# References vs. pointers

(C++) references (a.k.a. reference variables) and pointers are both reference datatypes.

References work like pointers and provide one with an alias to the assigned variable. A reference contains the memory address of a variable.

References are like pointers but:

* are dereferenced like instances 
* can never be NULL
* can only be assigned once, at creation. They are a named constant for an address (although the value at this address can be changed using the reference)
* referencing and dereferencing on references. It is not necessary to use '&' when assigning a variable to the reference nor a '\*' when obtaining the value of variable to which the reference points.

References are declared with '&', which is part of the type identifier in this context.

Most common use of reference variables is as the function formal parameter for pass-by-reference. Code is neater than if same is done with pointers.

# Class instances vs. pointers

A stack instance will be destroyed as soon as its enclosing scope is exited, whereas a heap instance will remain. Take care when trying to return an object which has been created on the stack: once it's enclosing scope is exited, the memory allocated on the stack will be freed. Return a pointer to a newed instance or the instance itself.

# Arrays

* The value of an array is the memory address of its first element (it's just a pointer to the address of the first element)
* When an array is passed as a parameter to a function, it decays to a pointer to the first element of the array
