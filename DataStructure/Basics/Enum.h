#pragma once

#include <iostream>

namespace enums
{
    enum Example : unsigned char
    {
        A, B, C
    };

    void Main()
    {
        Example value = B;

        if (value == 1)
        {
            std::cout << "This is enum" << std::endl;
        }
    }
}