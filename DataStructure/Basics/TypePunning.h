#pragma once

#include <iostream>

namespace typepun
{
    struct Entity
    {
        int x, y;
    };

    void Main()
    {
        Entity e = { 5, 8 };
        /**
         * type punning 
         * converting struct to array
         */
        int* position = (int*)&e;

        std::cout << position[0] << " " << position[1] << std::endl;
    }
}