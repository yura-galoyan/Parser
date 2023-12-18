#ifndef COLOR_REGISTRY_HPP
#define COLOR_REGISTRY_HPP

#include <unordered_map>
#include <QColor>
#include <string>

class ColorRegistry
{
public:
    ColorRegistry()
    {
        m_colors["red"] = Qt::red;
        m_colors["cyan"] = Qt::cyan;
        m_colors["blue"] = Qt::blue;
        m_colors["white"] = Qt::white;
        m_colors["green"] = Qt::green;
        m_colors["yellow"] = Qt::yellow;
        m_colors["magenta"] = Qt::magenta;
    }

    Qt::GlobalColor operator[](std::string key) const {
        return m_colors.at(key);
    }

private:
    std::unordered_map<std::string, Qt::GlobalColor> m_colors;

};

#endif //COLOR_REGISTRY_HPP