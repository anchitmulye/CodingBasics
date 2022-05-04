#pragma once

#include <iostream>
#include <string>
#include <string_view>

/**
 * @brief new operator
 * overloading the new operator to test when it is called
 * @param size 
 * @return void* 
 */
void* operator new(size_t size)
{
    std::cout << "Allocating " << size << " btyes\n";
    return malloc(size);
}

namespace string
{
    void PrintName(std::string_view name)
    {
        std::cout << name << std::endl;
    }
    
    void Main()
    {
        const char* name1 = "Anchit"; //1 byte per char
        char name2[7] = { 'A', 'n', 'c', 'h', 'i', 't', 0 };

        std::string name3 = "Anchit";
        bool contains = name3.find("it") != std::string::npos;

        const wchar_t* name4 = L"Anchit"; //2 or 4 byte per char
        const char16_t* name5 = u"Anchit"; //2 byte per char
        const char32_t* name6 = U"Anchit"; //4 byte per char

        std::cout << name1 << std::endl;
        std::cout << name2 << std::endl;

        const char* new_name = "Anchit Mulye";
        /**
         * string_view prevents unwanted copies 
         * which string.substr doesn't
         */
        std::string_view first_name(new_name, 6);
        std::string_view last_name(new_name + 7, 11);
        
        PrintName(new_name);
        PrintName(first_name);
        PrintName(last_name);
        /**
         * small strings less than or equal to 15 chars
         * allocated in stack
         */
        std::string small = "Anchit Mulye";
        /**
         * bigger strings greater than 15 chars 
         * allocated in heap
         */
        std::string big = "Anchit is living in India";
    }
}