#pragma once

#include <iostream>

/**
 * static outside class/struct
 * linkage of only visible to specific translation unit
 */
static int s_Variable = 10;

namespace stat 
{
    struct Entity
    {
        /**
         * statci inside class/struct
         * variable shared memory across all instances of class
         */
        static int x, y;
        static void Print()
        {
            std::cout << x << ", " << y << std::endl;
        }
    };

    int Entity::x;
    int Entity::y;

    void Function()
    {
        static int i = 0;
        i++;
        std::cout << i << std::endl;
    }

    void Main()
    {
        
        std::cout << s_Variable << std::endl;

        Entity e;
        Entity::x = 10;
        Entity::y = 5;

        Entity e1;
        Entity::x = 15; //accessing the same x
        Entity::y = 8; //accessing the same y

        Entity::Print();
        Entity::Print();

        Function();
        Function();
        Function();
        Function();
        Function();
    }
}