#pragma once

#include <iostream>

namespace casting
{
    class Base
    {
    public:
        Base() {}
        ~Base() {}
        virtual void PrintName() {}
    };
    class Derived : public Base
    {
    public:
        Derived() {}
        ~Derived() {}
    };
    class AnotherClass : public Base
    {
    public:
        AnotherClass() {}
        ~AnotherClass() {}
    };
    void Main()
    {
        double value = 5.25;
        /**
         * C style cast
         */
        int a = (int)value;
        std::cout << a << std::endl;
        /** 
         * C++ style cast
         */
        int b = static_cast<int>(value);
        std::cout << b << std::endl;
        /**
         * this is exactly type punning
         */
        //double s = reinterpret_cast<AnotherClass*>(&value);

        Derived* derived = new Derived();
        Base* actualBase = new AnotherClass();
        Base* actualDerived = derived;
        /**
         * run time test if valid
         */
        AnotherClass* ac = dynamic_cast<AnotherClass*>(actualBase);
        if (ac) std::cout << "Successful ac\n";
        AnotherClass* ac1 = dynamic_cast<AnotherClass*>(actualDerived);
        if (ac1) std::cout << "Successful ac1\n";
    }
}