#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

namespace sort
{
    void Main()
    {
        std::vector<int> values = { 3, 5, 1, 6, 2, 7 };
        /**
         * @brief sort in ascending order
         */
        std::sort(values.begin(), values.end());
        /**
         * @brief sort in descending order
         */
        std::sort(values.begin(), values.end(), std::greater<int>());
        /**
         * @brief sort in custom order with lambda
         */
        std::sort(values.begin(), values.end(), [](int a, int b)
        {
            if (a == 1)
                return false;
            if (b == 1)
                return true;
            return a < b;
        });

        for (const int& value : values)
            std::cout << value << std::endl; 
    }
}