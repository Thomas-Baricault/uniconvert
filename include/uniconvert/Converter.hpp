/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <string>


namespace tbaricault::uniconvert
{

    /**
     * @brief Utils class to convert a type to another
     * 
     * @tparam T Source type
     * @tparam U Destination type
     */
    template<typename T, typename U>
    struct Converter
    {

        /**
         * @brief Converts a value from a type to another
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        U operator()(const T& value) const;

    };

    /**
     * @brief Utils class to convert a string to boolean
     */
    template<>
    struct Converter<std::string, bool>
    {

        /**
         * @brief Converts a value from a string to boolean
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        bool operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a string to char
     */
    template<>
    struct Converter<std::string, char>
    {

        /**
         * @brief Converts a value from a string to char
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        char operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a string to an integer
     */
    template<>
    struct Converter<std::string, int>
    {

        /**
         * @brief Converts a value from a string to an integer
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        int operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to a long integer
     */
    template<>
    struct Converter<std::string, long>
    {

        /**
         * @brief Converts a value from a string to a long integer
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        long operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to a long long integer
     */
    template<>
    struct Converter<std::string, long long>
    {

        /**
         * @brief Converts a value from a string to a long long integer
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        long long operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to an unsigned long integer
     */
    template<>
    struct Converter<std::string, unsigned long>
    {

        /**
         * @brief Converts a value from a string to an unsigned long integer
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        unsigned long operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to an unsigned long long integer
     */
    template<>
    struct Converter<std::string, unsigned long long>
    {

        /**
         * @brief Converts a value from a string to an unsigned long long integer
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        unsigned long long operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to a float
     */
    template<>
    struct Converter<std::string, float>
    {

        /**
         * @brief Converts a value from a string to a float
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        float operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a string to a double
     */
    template<>
    struct Converter<std::string, double>
    {

        /**
         * @brief Converts a value from a string to a double
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        double operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a string to a long double
     */
    template<>
    struct Converter<std::string, long double>
    {

        /**
         * @brief Converts a value from a string to a long double
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        long double operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a boolean to string
     */
    template<>
    struct Converter<bool, std::string>
    {

        /**
         * @brief Converts a value from a boolean to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(bool value) const;

    };

    /**
     * @brief Utils class to convert a char to string
     */
    template<>
    struct Converter<char, std::string>
    {

        /**
         * @brief Converts a value from a char to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(char value) const;

    };

    /**
     * @brief Utils class to convert an integer to string
     */
    template<>
    struct Converter<int, std::string>
    {

        /**
         * @brief Converts a value from an integer to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(int value) const;

    };

    /**
     * @brief Utils class to convert a long integer to string
     */
    template<>
    struct Converter<long, std::string>
    {

        /**
         * @brief Converts a value from a long integer to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(long value) const;

    };

    /**
     * @brief Utils class to convert a long long integer to string
     */
    template<>
    struct Converter<long long, std::string>
    {

        /**
         * @brief Converts a value from a long long integer to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(long long value) const;

    };

    /**
     * @brief Utils class to convert an unsigned long integer to string
     */
    template<>
    struct Converter<unsigned long, std::string>
    {

        /**
         * @brief Converts a value from an unsigned long integer to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(unsigned long value) const;

    };

    /**
     * @brief Utils class to convert an unsigned long long integer to string
     */
    template<>
    struct Converter<unsigned long long, std::string>
    {

        /**
         * @brief Converts a value from an unsigned long long integer to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(unsigned long long value) const;

    };

    /**
     * @brief Utils class to convert a float to string
     */
    template<>
    struct Converter<float, std::string>
    {

        /**
         * @brief Converts a value from a float to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(float value) const;

    };

    /**
     * @brief Utils class to convert a double to string
     */
    template<>
    struct Converter<double, std::string>
    {

        /**
         * @brief Converts a value from a double to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(double value) const;

    };

    /**
     * @brief Utils class to convert a long double to string
     */
    template<>
    struct Converter<long double, std::string>
    {

        /**
         * @brief Converts a value from a long double to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(long double value) const;

    };

}


#include "Converter.tpp"
