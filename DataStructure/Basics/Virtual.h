#pragma once

#include <iostream>
#include <string>

namespace virt
{
    class Printable
    {
    public:
        /**
         * @brief Get the Class Name object
         * pure virtual function / interface
         * @return std::string 
         */
        virtual std::string GetClassName() = 0;
    };

    class Entity : public Printable
    {
    public:
        /**
         * @brief Get the Name object
         * virtual function stores v table for mapping
         * @return std::string 
         */
        virtual std::string GetName() { return "Entity"; }
        std::string GetClassName() override { return "Entity"; }
    };

    class Player : public Entity
    {
    private:
        std::string m_Name;
    public:
        Player(const std::string& name)
            : m_Name(name) {}

        std::string GetName() override { return m_Name; }
        std::string GetClassName() override { return "Player"; }
    };

    void PrintName(Entity* entity)
    {
        std::cout << entity->GetName() << std::endl;
    }

    void Print(Printable* obj)
    {
        std::cout << obj->GetClassName() << std::endl;
    }

    void Main()
    {
        Entity* e = new Entity();
        PrintName(e);
        Print(e);

        Player* p = new Player("Anchit");
        PrintName(p);
        Print(p);

    }
}