#pragma once

#include <iostream>

namespace loop
{
    void Main()
    {
        /**
         * int i = 0 is first time call
         * every time compare i < 5 execute code
         * increment i++
         */
        for (int i = 0; i < 5; i++)
        {
            std::cout << "In the simple for loop " << i << std::endl;
        }

        int i = 0;
        while (i < 5)
        {
            std::cout << "In the simple while loop " << i << std::endl;
            i++;
        }

        /**
         * execute once before check 
         */
        do
        {
            std::cout << "In the simple do while loop " << i << std::endl;
        } while (i < 5);

        /**
         * continue 
         * skip the current loop
         */
        for (int i = 0; i < 5; i++)
        {
            if (i % 2 == 0) continue;
            std::cout << "In the continue for loop " << i << std::endl;
        }

        /**
         * break 
         * breaks the loop completely
         */
        for (int i = 0; i < 5; i++)
        {
            if (i == 3) break;
            std::cout << "In the break for loop " << i << std::endl;
        }

        /**
         * return 
         * breaks the function
         */
        for (int i = 0; i < 5; i++)
        {
            if (i == 3) return;
            std::cout << "In the return for loop " << i << std::endl;
        }
    }
}