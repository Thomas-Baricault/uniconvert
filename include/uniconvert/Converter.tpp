/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <stdexcept>

#include "Converter.hpp"


namespace tbaricault::uniconvert
{

    template<typename T, typename U>
    U Converter<T, U>::operator()(const T& value) const
    {
        if constexpr (std::is_same_v<T, U>)
            return (value);
        if constexpr (std::is_constructible_v<U, T>)
            return (U{value});
        if constexpr (requires { static_cast<U>(value); })
            return (static_cast<U>(value));
        if constexpr (requires { reinterpret_cast<U>(value); })
            return (reinterpret_cast<U>(value));
        throw std::invalid_argument("unsupported conversion");
    }

}
