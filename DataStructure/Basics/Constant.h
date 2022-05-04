#pragma once

#include <iostream>

namespace constant
{
    class Entity
    {
    private:
        int m_x, m_y;
        /**
         * can be changed inside const func
         */
        mutable int var;
    public:
        const int GetX() const
        {
            var = 2;
            return m_x;
        }
        void SetX(int x)
        {
            m_x = x;
        }
        /**
         * @brief Sum function
         * it will calculate the sum at compile time
         * @return constexpr int 
         */
        constexpr int Sum()
        {
            return m_x + m_y;
        }
        Entity()
        {
            m_x = 0;
            m_y = 0;
        }
    };

    void Main()
    {
        const int a = 10;
        const int* const b = new int;

        const Entity e;
        const int var1 = e.GetX(); //it will be const run time 
        constexpr int var2 = 105; // it should be defined at compile time

        int x = 8;
        auto f = [=]() mutable
        {
            x += 1;
            std::cout << "lamda" << std::endl;
        };

        f();
    }
}