#pragma once

#include <iostream>
#include <fstream>
#include <optional>
#include <variant>
#include <tuple>
#include <any>

namespace data
{
    std::string ReadFileAsString(const std::string& filepath)
    {
        std::ifstream stream(filepath);
        if (stream)
        {
            std::string result;
            //read file
            stream.close();
            return result;
        }
        //return empty if no data found
        return std::string();
    }
    /**
     * @brief function to read from file
     * With optional to check data may or maynot be present
     * @param filepath 
     * @return std::optional<std::string> 
     */
    std::optional<std::string> ReadFileIfData(const std::string& filepath)
    {
        std::ifstream stream(filepath);
        if (stream)
        {
            std::string result;
            //read file
            stream.close();
            return result;
        }
        //return empty if no data found
        return {};
    }

    void Main()
    {
        std::optional<std::string> data = ReadFileIfData("data.txt");

        std::string value = data.value_or("Not present");
        std::cout << value << std::endl;

        if (data)
        {
            std::cout << "File read successfully!\n";
        }
        else
        {
            std::cout << "File could not be read!\n";
        }
        /**
         * type safe union
         */
        std::variant<std::string, int> data1;
        data1 = std::string("Anchit");
        std::cout << std::get<std::string>(data1) << '\n';
        data1 = 15;
        std::cout << std::get<int>(data1) << '\n';

        /**
         * any data without list of types
         */
        std::any data2;
        data2 = 2.3;
        data2 = std::string("Anchit");
        std::string& string = std::any_cast<std::string&>(data2);

    }
}