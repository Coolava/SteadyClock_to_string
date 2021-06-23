// SteadyClock_to_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include "chrono2/chrono2.h"

int main()
{
    auto start = std::chrono::steady_clock::now();
    int count = 1;
    while (1)
    {
        auto time = std::chrono::steadyToSystem(std::chrono::steady_clock::now());

        std::cout << time_toString(time) << "\n";

        std::this_thread::sleep_until(start + std::chrono::milliseconds(1000) * count++);

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
