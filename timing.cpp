/*
We can find out the time taken by different parts of a program by using the std::chrono library.
    std::chrono has two distinct objects–timepoint and duration.
A timepoint as the name suggests represents a point in time
    whereas a duration represents an interval or span of time.
The C++ library allows us to subtract two timepoints to get the interval of time passed in between.
    Using provided methods we can also convert this duration to appropriate units.
The std::chrono provides us with three clocks with varying accuracy.
    The high_resolution_clock is the most accurate and hence it is used to measure execution time.
*/

#include <iostream>
#include <chrono>
#include <thread>

int main()
{

    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << duration.count() << "s" << std::endl;

    std::cin.get();

    return 0;
}