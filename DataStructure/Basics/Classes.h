#pragma once

#include <iostream>

namespace classes
{
    class Line
    {
    public:
        int x, y;
        float slope;
        void Extend(int xa, int ya)
        {
            x += xa;
            y += ya;
        }
    };

    struct Vector
    {
        float x, y;
        void Add(const Vector& vect)
        {
            x += vect.x;
            y += vect.y;
        }
    };

    class Log
    {
    public:
        enum Level : unsigned int
        {
            LevelError, LevelWarning, LevelInfo
        };
    private:
        Level m_LogLevel = LevelInfo;
    public:
        void SetLevel(Level level)
        {
            m_LogLevel = level;
        }
        void Info(const char* message)
        {
            if (m_LogLevel >= LevelInfo)
                std::cout << "[INFO]: " << message << std::endl;
        }
        void Warn(const char* message)
        {
            if (m_LogLevel >= LevelWarning)
                std::cout << "[WARN]: " << message << std::endl;
        }
        void Error(const char* message)
        {
            if (m_LogLevel >= LevelError)
                std::cout << "[ERROR]: " << message << std::endl;
        }
    };

    void Main()
    {
        Line line1;
        line1.x = 5;
        line1.y = 10;

        line1.Extend(1, 2);

        Log log;
        log.SetLevel(Log::LevelWarning);
        log.Warn("Logging");
        log.Info("Logging");
        log.Error("Logging");
    }
}