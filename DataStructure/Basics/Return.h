#pragma once

#include <iostream>
#include <string>
#include <array>
#include <tuple>

namespace ret
{
    /**
     * @brief Type 1 return function
     * the most optimal because of no copies anywhere
     * @param source1 
     * @param source2 
     */
    void Function1(std::string& source1, std::string& source2)
    {
        source1 = "Anchit";
        source2 = "Mulye";
    }
    /**
     * @brief Type 2 return function
     * return array / vector of returns items
     * @return std::array<std::string, 2> 
     */
    std::array<std::string, 2> Function2()
    {
        std::string s1 = "Anchit";
        std::string s2 = "Mulye";
        return std::array<std::string, 2>{ s1, s2 };
    }
    /**
     * @brief Type 3 return function
     * return tuple /pair of different type return
     * @return std::tuple<std::string, std::string> 
     */
    std::tuple<std::string, std::string> Function3()
    {
        std::string s1 = "Anchit";
        std::string s2 = "Mulye";
        return std::make_pair(s1, s2);
    }
    struct Ret
    {
        int a;
        std::string b;
    };
    /**
     * @brief Type 4 return function 
     * return a struct of all data
     * @return struct Ret 
     */
    Ret Function4()
    {
        Ret out;
        return out;
    }

    void Main()
    {
        std::string s1, s2;
        Function1(s1, s2);

        std::cout << s1 << " " << s2 << std::endl;

        std::array<std::string, 2> s = Function2();
        std::cout << s[0] << " " << s[1] << std::endl;

        auto s3 = Function3();
        std::cout << std::get<0>(s3) << " " << std::get<1>(s3) << std::endl;
    }   
}
