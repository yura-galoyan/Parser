#ifndef ITEM_HPP
#define ITEM_HPP

#include <unordered_map>
#include <string>
#include <any>

struct Point{
    double x;
    double y;
};

class Item
{
public:
    using Attributes = std::unordered_map<std::string,std::string>;
    enum class Type{Rect, Circle};
    Type getType(){ return m_type;  }
    Attributes& attributes() { return m_attributes; }

protected:
    bool setType(Type t){ m_type = t; return true; }

private:
    Attributes m_attributes;
    Type m_type;
};


#endif //ITEM_HPP