/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


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

}
