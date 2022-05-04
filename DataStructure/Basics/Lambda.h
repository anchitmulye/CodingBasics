#pragma once

#include <iostream>
#include <functional>
#include <algorithm>

namespace lambda
{
    void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
    {
        for (const int& value : values)
            func(value);
    }

    void Main()
    {
        std::vector<int> values = { 1, 5, 4, 2, 3 };
        auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
        std::cout << *it << std::endl;

        int a = 5;

        auto lamb = [=](int value){ std::cout << "Value: " << a << std::endl; };
        ForEach(values, lamb);
    }
}