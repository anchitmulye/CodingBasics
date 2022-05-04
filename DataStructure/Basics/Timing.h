#pragma once

#include <iostream>
#include <chrono>
#include <thread>

namespace timer
{
    struct Timer
    {
        std::chrono::time_point<std::chrono::system_clock> start, end;
        std::chrono::duration<float> duration;

        Timer()
        {
            start = std::chrono::high_resolution_clock::now();
        }
        ~Timer()
        {
            end = std::chrono::high_resolution_clock::now();
            duration = end - start;
            std::cout << "Time lapsed: " << duration.count() << std::endl; 
        }
    };
    void Function1()
    {
        Timer one;
        for (int i = 0; i < 100; i++)
            std::cout << "Hello" << std::endl;
    }
    void Function2()
    {
        Timer two;
        for (int i = 0; i < 100; i++)
            std::cout << "Hello\n";
    }
    void Main()
    {
        Function1();
        Function2();
    }
}