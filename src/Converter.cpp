/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#include <limits>

#include "uniconvert/Converter.hpp"


namespace tbaricault::uniconvert
{

    bool Converter<std::string, bool>::operator()(const std::string& value) const
    {
        if (value == "0" || value == "false")
            return (false);
        if (value == "1" || value == "true")
            return (true);
        throw std::invalid_argument("convertion failed");
    }

    char Converter<std::string, char>::operator()(const std::string& value) const
    {
        if (value.length() == 1)
            return (value.front());
        throw std::invalid_argument("convertion failed");
    }

    int Converter<std::string, int>::operator()(const std::string& value, int base) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        int result = std::stoi(value, &length, base);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    long Converter<std::string, long>::operator()(const std::string& value, int base) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        long result = std::stol(value, &length, base);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    long long Converter<std::string, long long>::operator()(const std::string& value, int base) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        long long result = std::stoll(value, &length, base);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    unsigned long Converter<std::string, unsigned long>::operator()(const std::string& value, int base) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        unsigned long result = std::stoul(value, &length, base);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    unsigned long long Converter<std::string, unsigned long long>::operator()(const std::string& value, int base) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        unsigned long long result = std::stoull(value, &length, base);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    float Converter<std::string, float>::operator()(const std::string& value) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        float result = std::stof(value, &length);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    double Converter<std::string, double>::operator()(const std::string& value) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        double result = std::stod(value, &length);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    long double Converter<std::string, long double>::operator()(const std::string& value) const
    {
        std::size_t length = std::numeric_limits<std::size_t>::max();
        long double result = std::stold(value, &length);
        if (length != value.length())
            throw std::invalid_argument("convertion failed");
        return (result);
    }

    std::string Converter<bool, std::string>::operator()(bool value) const
    {
        return (value ? "true" : "false");
    }

    std::string Converter<char, std::string>::operator()(char value) const
    {
        return (std::string(1, value));
    }

    std::string Converter<int, std::string>::operator()(int value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<long, std::string>::operator()(long value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<long long, std::string>::operator()(long long value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<unsigned long, std::string>::operator()(unsigned long value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<unsigned long long, std::string>::operator()(unsigned long long value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<float, std::string>::operator()(float value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<double, std::string>::operator()(double value) const
    {
        return (std::to_string(value));
    }

    std::string Converter<long double, std::string>::operator()(long double value) const
    {
        return (std::to_string(value));
    }

}
