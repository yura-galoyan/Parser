#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
public:
    enum class Type{Rect, Circle, Poly, Line };
    Type getType(){ return m_type;  }

protected:
    bool setType(Type t){ t = m_type; return true; }

private:
    Type m_type;    
};


#endif //ITEM_HPP