#pragma once

#include <iostream>
#include <vector>

namespace funptr
{
    void HelloWorld(int num)
    {
        std::cout << "Hello World " << num << std::endl;
    }
    void ForEach(const std::vector<int>& values, void(*func)(int))
    {
        for (const int& value : values)
            func(value);
    }
    void Main()
    {
        void(*function)(int) = HelloWorld;

        function(8);
        function(10);

        std::vector<int> values = { 1, 5, 4, 2, 3 };
        ForEach(values, [](int value){ std::cout << "Value: " << value << std::endl; });
    }
}