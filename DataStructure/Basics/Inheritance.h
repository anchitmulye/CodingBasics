#pragma once

#include <iostream>

namespace inheritance
{
    class Entity
    {
    public:
        float x, y;

        void Move(float xa, float ya)
        {
            x += xa;
            y += ya;
        }
    };

    class Player : public Entity
    {
    public:
        const char* Name;

        void PrintName()
        {
            std::cout << Name << std::endl;
        }
    };

    void Main()
    {
        Player player;
        player.Move(5, 8);
        player.y = 10;
    }
}