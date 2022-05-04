#pragma once

#include <iostream>
#include <thread>

namespace thr
{
    static bool s_Finished = false;

    void DoWork()
    {
        using namespace std::literals::chrono_literals;

        std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

        while (!s_Finished)
        {
            std::cout << "Working...\n";
            std::this_thread::sleep_for(1s);
        }
    }
    void Main()
    {
        std::thread worker(DoWork);

        std::cin.get();
        s_Finished = true;

        std::cout << "Finished!\n";
        std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;
        worker.join();
    }
}