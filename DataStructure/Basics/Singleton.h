#pragma once

#include <iostream>

namespace single
{
    class Singleton
    {
    public:
        Singleton(const Singleton&) = delete;
        static Singleton& Get()
        {
            return s_Instance;
        }
        void Function() {}
    private:
        Singleton() {}
        static Singleton s_Instance;
    };

    Singleton Singleton::s_Instance;

   class Random
    {
    public:
        Random(const Random&) = delete;
        static Random& Get()
        {
            static Random s_RInstance;
            return s_RInstance;
        }
        float Float() { return m_RandomGenerator; }
    private:
        Random() {}
        float m_RandomGenerator= 0.5f;
        static Random s_RInstance;
    };

    void Main()
    {
        auto& instance = Singleton::Get();
        instance.Function();   

        float num = Random::Get().Float(); 
        std::cout << num << std::endl;    
    }
}