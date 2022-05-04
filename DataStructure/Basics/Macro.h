#pragma once

#include <iostream>

#define DEBUG 1

#if DEBUG == 1
#define PRINT(x) std::cout << x << std::endl
#else
#define PRINT(x)
#endif

namespace macro
{
    void Main()
    {
        std::cout << "Default" << std::endl;

        PRINT("Debug");

        std::cout << __cplusplus << std::endl;
    }
}