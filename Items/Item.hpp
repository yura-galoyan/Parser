#ifndef ITEM_HPP
#define ITEM_HPP

#include <unordered_map>
#include <string>
#include <any>

class iSerializer;
struct Point{
    double x;
    double y;
};

class Item
{
public:
    using Attributes = std::unordered_map<std::string,std::any>;
    enum class Type{Rect, Circle};
    Type getType(){ return m_type;  }
    virtual void accept(iSerializer& serial) = 0;

protected:
    bool setType(Type t){ m_type = t; return true; }

private:
    Type m_type;
};


#endif //ITEM_HPP