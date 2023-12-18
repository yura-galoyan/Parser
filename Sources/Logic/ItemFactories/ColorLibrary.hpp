#ifndef COLOR_LIBRARY_HPP
#define COLOR_LIBRARY_HPP

#include "ColorRegistry.hpp"

class ColorLibrary
{
public:
    static auto getColorFrom(std::string key) {
        return m_colorRegistry[key];
    }

private:
    const inline static ColorRegistry m_colorRegistry;
};

#endif //COLOR_LIBRARY_HPP