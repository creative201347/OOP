/*
Multithreading is a specialized form of multitasking and a multitasking is the feature that allows your computer to run two or more programs concurrently.
    In general, there are two types of multitasking: process-based and thread-based.

Process-based multitasking handles the concurrent execution of programs.
    Thread-based multitasking deals with the concurrent execution of pieces of the same program.

A multithreaded program contains two or more parts that can run concurrently.
    Each part of such a program is called a thread, and each thread defines a separate path of execution.

*/

#include <iostream>
#include <thread>

static bool s_finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;
    while (!s_finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main()

{
    std::thread worker(DoWork);

    std::cin.get();
    s_finished = true;

    worker.join();
    std::cout << "Finished...\n";
    std::cin.get();
}