#pragma once

#include <iostream>

namespace condition
{
    void Main()
    {
        int x = 3;
        if (x == 5)
        {
            std::cout << "X is 5" << std::endl;
        }
        else if (x < 10)
        {
            std::cout << "X is less than 10" <<std::endl;
        }
        else
        {
            std::cout << "X is not 5" << std::endl;
        }
    }
}