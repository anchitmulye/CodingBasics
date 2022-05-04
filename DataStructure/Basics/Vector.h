#pragma once

#include <iostream>
#include <vector>

namespace vect
{
    struct Vertex
    {
        float x, y, z;

        Vertex(float x, float y, float z)
            : x(x), y(y), z(z) {}
        
        Vertex(const Vertex& vertex)
            : x(vertex.x), y(vertex.y), z(vertex.z)
        {
            std::cout << "Copied" << std::endl;
        }
    };

    std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
    {
        stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
        return stream;
    }

    void Main()
    {
        //Static array
        //Vertex* vertices = new Vertex[5];

        //Dynamic array
        std::vector<Vertex> vertices1;
        /** 
         * reserve memory without need for copy
         */
        vertices1.reserve(3);
        /**
         * push_back makes copy in main then send the data 
         * emplace_back sends the data directly
         */
        vertices1.emplace_back(1, 2 ,3);
        vertices1.emplace_back(4, 5, 6);
        vertices1.emplace_back(7, 8, 9);


        for (int i = 0; i < vertices1.size(); i++)
            std::cout << vertices1[i] << std::endl;

        for (const Vertex& v : vertices1)
            std::cout << v << std::endl;

        vertices1.erase(vertices1.begin() + 1);
    }
}