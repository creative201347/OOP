/*
Types of inheritance
    1. Single inheritance.
        A derived class with only one base class (Base -> Derived)
    2. Multiple inheritance.
        A derived class with more than one base class. (Base1, Base2 -> Derved)
    3. Hierarchial inheritance.
        Several dervied class from a single base class (Base -> Derived1, Derived2, Derived3)
    4. Multi-level inheritance.
        Deriving a class from derived class (Base -> Derived1 -> Derived2)
    5. Hybrid inheritance.
        Combination of multiple and multi-level inheritance (Base -> Derived1, Derived2 -> Derived3)

    class derivedClassname : visibilityMode baseClass{

    }

1. Default visibility mode is private
2. Public visibility mode: Public members of base class becomes Public members of derived class
3. Private visibility mode: Public members of base class becomes Private members of derived class
4. Private members are never inherited

For a protected member:

                            Public derivation Private derivation Protected Derivation
    1. Private members      Not inherited     Not inherited      Not inherited
    2. Protected members    Protected         Private            Protected
    3. Public members       Public            Private            Protected
*/
