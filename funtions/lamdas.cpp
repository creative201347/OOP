/*
C++ Lambda expression allows us to define anonymous function objects (functors) which can either be used inline or passed as an argument.
A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope.
We can capture external variables from enclosing scope by three ways :
      Capture by reference
      Capture by value
      Capture by both (mixed capture)
Syntax used for capturing variables :
      [&] : capture all external variable by reference
      [=] : capture all external variable by value
      [a, &b] : capture a by value and b by reference
A lambda with empty capture clause [ ] can access only those variable which are local to it.

auto greet = []() {
  // lambda function body
};
auto add = [] (int a, int b) {
  // always returns an 'int'
  return a + b;
};
[] is called the lambda introducer which denotes the start of the lambda expression
() is called the parameter list which is similar to the () operator of a normal function

*/

#include <iostream>
#include <vector>
#include <algorithm>

void ForEach(const std::vector<int> &values, void (*func)(int))
{
    for (int value : values)
        func(value);
}
int main()
{
    std::vector<int> values = {1, 2, 3, 4, 56, 6, 9};
    auto lambda = [](int value)
    { std::cout << "Value: " << value << std::endl; };

    ForEach(values, lambda);
    std::cin.get();
}
