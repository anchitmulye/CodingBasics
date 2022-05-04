#pragma once

#include <iostream>

namespace virdes
{
    class Base
    {
    public:
        Base() { std::cout << "Base constructed\n"; }
        virtual ~Base() { std::cout << "Base destructed\n"; }
    };
    class Derived : public Base
    {
    public:
        Derived() { std::cout << "Derived constructed\n"; }
        ~Derived() { std::cout << "Derived destructed\n"; }
    };
    void Main()
    {
        Base* base = new Base();
        delete base;
        std::cout << "------------------\n";
        Derived* derived = new Derived();
        delete derived;
        std::cout << "------------------\n";
        Base* poly = new Derived();
        delete poly;
    }
}