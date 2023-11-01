#ifndef ITEM_HPP
#define ITEM_HPP

#include <memory>

struct Point{
    double x;
    double y;
};

class Item
{
public:
    enum class Type{Slide, Item};
    Type getType(){ return m_type;  }

    virtual std::unique_ptr<Item> clone() const = 0; 

protected:
    bool setType(Type t){ m_type = t; return true; }

private:
    Type m_type;    
};


#endif //ITEM_HPP