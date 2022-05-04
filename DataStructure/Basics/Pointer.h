#pragma once

#include <iostream>
#include <cstring>
#include <memory>

namespace pointer
{
    class Mine
    {
    public:
        const char* name;
    };

    void Main()
    {
        /**
         * type of pointer is useless 
         * void means this pointer can point to anything
         */
        void* ptr = nullptr;

        int var = 10;
        int* ptr1 = &var;

        std::cout << ptr1 << std::endl;

        /**
         * dereferencing ptr 
         * store new info
         */
        *ptr1 = 5;
        std::cout << var << std::endl;

        char* buffer = new char[8];
        std::memset(buffer, 0, 8);

        /**
         * ptr to ptr
         */
        char** ptr2 = &buffer;

        delete[] buffer;

        /**
         * reference
         */
        int a = 15;
        int& ref = a;

        /**
         * unique ptr scoped based 
         * can't copy
         */
        std::unique_ptr<Mine> unique = std::make_unique<Mine>();

        /**
         * shared ptr based on reference counting 
         * copy is enabled
         */
        std::shared_ptr<Mine> shared = std::make_shared<Mine>();
        /**
         * weak ptr doesn't increase the reference count 
         * when it is copied
         */
        std::weak_ptr<Mine> weak = shared;
    }    
}
