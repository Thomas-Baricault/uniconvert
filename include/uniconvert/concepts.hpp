/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <concepts>


namespace tbaricault::uniconvert::concepts
{

    template<typename T>
    concept BasicIntegralType =
        std::same_as<T, int> ||
        std::same_as<T, long> ||
        std::same_as<T, long long> ||
        std::same_as<T, unsigned long> ||
        std::same_as<T, unsigned long long>;

    template<typename T>
    concept BasicFloatingPointType =
        std::same_as<T, float> ||
        std::same_as<T, double> ||
        std::same_as<T, long double>;

    template<typename T>
    concept BasicNumericType =
        BasicIntegralType<T> ||
        BasicFloatingPointType<T>;

    template<typename T>
    concept BasicType =
        std::same_as<T, bool> ||
        std::same_as<T, char> ||
        BasicNumericType<T>;

}
