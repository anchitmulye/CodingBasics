#pragma once

#include <iostream>

/**
 * primite data types
 */
namespace variable
{
    void Main()
    {
        /**
         * signed int is 31 bits (4 bytes * 8) - 1 bit
         * value range is 0 to 2,147,483,647
         */
        signed int var1 = 2147483647;
        /**
         * unsigned int is 32 bits (4 bytes * 8)
         * value range is 0 to 4,294,967,295
         */
        unsigned int var2 = 4294967295;
        /**
         * char is 1 byte
         * value range is 0 to 128
         */
        char var3 = 'A';
        /**
         * short is 2 bytes
         * value rang is 0 to 32,767
         */
        short var4 = 4;
        /**
         * long is 4 bytes
         * value range is 0 to 2,147,483,647
         */
        long var5 = 123456789;
        /**
         * long long is 8 bytes
         * value range is 0 to 9,223,372,036,854,775,807
         */
        long long var6 = 9223372036854775807;

        /**
         * float is 4 bytes
         * 
         */
        float var7 = 12.5f;
        /**
         * double is 8 bytes
         * 
         */
        double var8 = 12345.6789;

        /**
         * bool 1 byte
         * 0 is false anything else is true
         */
        bool var9 = 0;

        /**
         * pointer is defined by * next to any
         */
        int* var10 = nullptr;

        /**
         * reference is defined by & next to any
         */
        int& var = var1;

        std::cout << sizeof(long long) << std::endl;
        std::cout << var << " also " << var1 << std::endl;
    }
}