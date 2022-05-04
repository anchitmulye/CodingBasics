#pragma once

#include <iostream>
#include <string>
#include <tuple>

namespace bind
{
    std::tuple<std::string, int> CreatePerson()
    {
        return { "Anchit", 24 };
    }
    void Main()
    {
        /**
         * The oldest way for multiple returns
         */
        auto person = CreatePerson();
        std::string& name = std::get<0>(person);
        int age = std::get<1>(person);

        /**
         * Using tie relatively better
         */
        std::string name1;
        int age1;
        std::tie(name1, age1) = CreatePerson();

        /**
         * Using structured binding in C17
         */
        auto[name2, age2] = CreatePerson();
        std::cout << name2 << " " << age2 << std::endl;
    }
}