#ifndef ITEM_HPP
#define ITEM_HPP

#include <unordered_map>
#include <iostream>
#include <memory>
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
    enum class Type : std::size_t{
        Rect = 100,Circle = 200
    }; 
    using Attributes = std::unordered_map<std::string,std::any>;
    
public:
    virtual void accept(iSerializer& serial);
    auto& type() { return m_type; }
    virtual std::unique_ptr<Item> clone() = 0;
    
protected:
    Type m_type;
};

inline void Item::accept(iSerializer& serial){ std::cout << "Item::accept(iSerializer& serial) function should not be executed" << std::endl; };

#endif //ITEM_HPP