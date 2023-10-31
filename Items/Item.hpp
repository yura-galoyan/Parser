#ifndef ITEM_HPP
#define ITEM_HPP

struct Point{
    double x;
    double y;
};

class Item
{
public:
    enum class Type{Slide, Item};
    Type getType(){ return m_type;  }

protected:
    bool setType(Type t){ m_type = t; return true; }

private:
    Type m_type;    
};


#endif //ITEM_HPP