#pragma once

#include <iostream>
#include <string>
#include <cstring>

namespace constructor
{
    class Entity
    {
    public:
        int x, y;
        /**
         * @brief Construct a new Entity object
         * default constructor
         */
        Entity()
        {
            x = 0;
            y = 0;
        }
        /**
         * @brief Construct a new Entity object
         * constructor initializer list
         * @param xi 
         * @param yi 
         */
        Entity(int xi, int yi)
            : x(xi), y(yi) {}
        /**
         * @brief Construct a new Entity object
         * paramterized constructor
         * @param xi 
         * @param yi 
         */
        // Entity(int x, int y)
        // {
        //     this->x = x;
        //     this->y = y;
        // }
        /**
         * @brief Destroy the Entity object
         * default destructor
         */
        ~Entity()
        {

        }
        void Print()
        {
            std::cout << x << ", " << y << std::endl;
        }
    };

    class Log
    {
    private:
        /**
         * @brief Construct a new Log object
         * blocking the call of default constructor
         */
        //Log() {}
    public:
        /**
         * @brief Construct a new Log object
         * delete the default constructor
         */
        Log() = delete;
        static void Write()
        {

        }
    };

    class String
    {
    private:
        char* m_Buffer;
        unsigned int m_Size;
    public:
        String(const char* string)
        {
            m_Size = std::strlen(string);
            m_Buffer = new char[m_Size + 1];
            std::memcpy(m_Buffer, string, m_Size);
            m_Buffer[m_Size] = 0;
        }
        /**
         * @brief Construct a new String object
         * copy constructor overriden for deep copy
         * @param other 
         */
        String(const String& other)
            : m_Size(other.m_Size)
        {
            m_Buffer = new char[m_Size + 1];
            std::memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
        }
        /**
         * @brief Destroy the String object
         * default destructor
         */
        ~String()
        {
            delete[] m_Buffer;
        }
        friend std::ostream& operator<<(std::ostream& stream, const String& string); 
    };

    std::ostream& operator<<(std::ostream& stream, const String& string)
    {
        stream << string.m_Buffer;
        return stream;
    }

    void Main()
    {
        //Entity e(10, 5);
        //e.Print();

        //Log::Write();

        String string = "Anchit";
        String second = string;
        std::cout << string << std::endl;
        std::cout << second << std::endl;
    }
}