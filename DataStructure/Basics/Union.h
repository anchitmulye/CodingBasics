#pragma once

#include <iostream>

namespace uni
{
    struct Vector2
    {
        float x, y;
    };
    struct Vector4
    {
        union 
        {
            struct 
            {
                float x, y, z, w;
            };
            struct 
            {
                Vector2 a, b;
            };
        };
    };
    void Print(const Vector2& vector)
    {
        std::cout << vector.x << ", " << vector.y << std::endl;
    }
    void Main()
    {
      Vector4 vect = { 1.0f, 2.0f, 3.0f, 4.0f };
      /**
       * @brief using Union
       * multiple addressing of the same data
       */
      Print(vect.a);
      Print(vect.b);
      vect.z = 500;
      Print(vect.a);
      Print(vect.b);
    }
}