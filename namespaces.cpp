/*
Consider a situation, when we have two persons with the same name, Zara, in the same class.
    Whenever we need to differentiate them definitely we would have to use some additional
    information along with their name, like either the area, if they live in
    different area or their mother’s or father’s name, etc.

Same situation can arise in your C++ applications.
For example, you might be writing some code that has a function called xyz()
    and there is another library available which is also having same function xyz().
    Now the compiler has no way of knowing which version of xyz() function you are
    referring to within your code.

A namespace is designed to overcome this difficulty and is used as additional
    information to differentiate similar functions, classes, variables etc.
    with the same name available in different libraries. Using namespace,
    you can define the context in which names are defined. In essence, a namespace defines a scope.

Defining a Namespace
    namespace namespace_name {
        // code declarations
    }
namespace_name::code; // code could be variable or function.
 using namespace namespace_name;
    code();
*/
// The prime fpurpose of namespace is to avoid naming conflicts

#include <iostream>
using namespace std;

namespace ok
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }
}

using namespace ok;
int main()
{
    func();
    return 0;
}