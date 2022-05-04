#pragma once

#include <iostream>

namespace function
{
    /**
     * @brief this is basic multiply function
     * 
     * @param a 
     * @param b 
     * @return int 
     */
    int Multiply(int a, int b)
    {
        return a * b;
    }

    /**
     * @brief this is multiply with log
     * this function only takes which changes keeping logic same
     * 
     * @param a 
     * @param b 
     */
    void MultiplyAndLog(int a, int b)
    {
        int result = Multiply(a, b);
        std::cout << result << std::endl;
    }

    void Main()
    {
        std::cout << function::Multiply(5, 8) << std::endl;

        function::MultiplyAndLog(5, 8);
    }
}