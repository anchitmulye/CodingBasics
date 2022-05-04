#pragma once

#include <iostream>

namespace temp
{
    template<typename T>
    void Print(T value)
    {
        std::cout << value << std::endl;
    }
    template<typename T, int N>
    class Array
    {
    private:
        T m_Array[N];
    public:
        int GetSize() const { return N; }
    };

    void Main()
    {
        Print(10);
        Print("Anchit");
        Print(10.5f);

        Array<float, 5> array;
        std::cout << array.GetSize() << std::endl;
    }
}