#include <iostream>

void HelloWorld()
{
    std::cout << "Hello World!!" << std::endl;
}
int main()
{
    // auto function = HelloWorld;
    // function();
    // function();

    // void (*function)() = HelloWorld;
    // function();

    typedef void (*function)();
    function HelloWorldFunction = HelloWorld;
    HelloWorldFunction();

    std::cin.get();
}
