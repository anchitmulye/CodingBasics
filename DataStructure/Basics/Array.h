#pragma once

#include <iostream>
#include <array>

namespace array
{
    void Main()
    {
        int example[5];
        int* ptr = example;

        example[0] = 10;
        example[4] = 14;
        *(ptr + 4) = 15;

        static const int size = 5;
        int staticArray[size];

        std::array<int, 5> newArray;

        std::cout << example << std::endl;
        std::cout << example[1] << std::endl;
        std::cout << example[4] << std::endl;
    }   
}
