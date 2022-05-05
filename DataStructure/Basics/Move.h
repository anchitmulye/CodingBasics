#pragma once

#include <iostream>
#include <cstring>
#include <utility>

namespace move
{
    class String
    {
    public:
        String() = default;
        String(const char* string)
        {
            printf("Created!\n");
            m_Size = std::strlen(string);
            m_Data = new char[m_Size];
            memcpy(m_Data, string, m_Size);
        }
        String(const String& other)
        {
            printf("Copied!\n");
            m_Size = other.m_Size;
            m_Data = new char[m_Size];
            memcpy(m_Data, other.m_Data, m_Size);
        }
        /**
         * @brief Construct a new String object
         * move constructor
         * @param other 
         */
        String(String&& other) noexcept
        {
            printf("Moved!\n");
            m_Size = other.m_Size;
            m_Data = other.m_Data;
            
            other.m_Data = nullptr;
            other.m_Size = 0;
        }
        String& operator=(String&& other) noexcept
        {
            printf("Moved!\n");

            if (this != &other)
            {
                delete[] m_Data;

                m_Size = other.m_Size;
                m_Data = other.m_Data;
                
                other.m_Data = nullptr;
                other.m_Size = 0;
            }
            return *this;
        }
        ~String()
        {
            printf("Destroyed\n");
            delete[] m_Data;
        }
        void Print()
        {
            for (uint32_t i = 0; i < m_Size; i++)
                printf("%c", m_Data[i]);
            printf("\n");
        }
    private:
        char* m_Data;
        uint32_t m_Size;
    };

    class Entity
    {
    public:
        Entity(const String& name)
            : m_Name(name)
        {

        }
        Entity(String&& name)
            : m_Name(std::move(name))
        {

        }
        void PrintName()
        {
            m_Name.Print();
        }
    private:
        String m_Name;
    };

    void Main()
    {
        Entity entity(String("Anchit"));
        entity.PrintName();

        // String apple = "Apple";
        // String dest;

        // apple.Print();
        // dest.Print();

        // dest = std::move(apple);

        // apple.Print();
        // dest.Print();

        String string = "Hello";
        String dest = string; //Copying
        String dest2 = std::move(string); //Move

    }
}