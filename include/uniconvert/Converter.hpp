/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <string>

#include "concepts.hpp"


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
     * 
     * @tparam T Destination type
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
     * 
     * @tparam T Destination type
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
     * @brief Utils class to convert a string to basic integral type
     * 
     * @tparam T Destination type
     */
    template<concepts::BasicIntegralType T>
    struct Converter<std::string, T>
    {

        /**
         * @brief Converts a value from a string to basic integral type
         * 
         * @param value Value to convert
         * @param base Number base used
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        T operator()(const std::string& value, int base = 10) const;

    };

    /**
     * @brief Utils class to convert a string to basic floating point type
     * 
     * @tparam T Destination type
     */
    template<concepts::BasicFloatingPointType T>
    struct Converter<std::string, T>
    {

        /**
         * @brief Converts a value from a string to basic floating point type
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        T operator()(const std::string& value) const;

    };

    /**
     * @brief Utils class to convert a basic type to string
     * 
     * @tparam T Source type
     */
    template<concepts::BasicType T>
    struct Converter<T, std::string>
    {

        /**
         * @brief Converts a value from a basic type to string
         * 
         * @param value Value to convert
         * 
         * @return Converted value
         * 
         * @throws std::invalid_argument If convertion failed
         */
        std::string operator()(const T& value) const;

    };

}


#include "Converter.tpp"
