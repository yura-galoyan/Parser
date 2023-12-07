#ifndef ITEM_HPP
#define ITEM_HPP

#include <unordered_map>
#include <iostream>
#include <memory>
#include <string>
#include <any>

//
#include <QPointF>

class iSerializer;
struct Point{
    double x;
    double y;
    operator QPointF() { return QPointF(x,y);}
};

class Item
{
public:
    Item(){
        m_id = getNextId();
    };
    enum class Type : std::size_t{
        Rect = 100, Circle = 200, Text = 300
    }; 
    using Attributes = std::unordered_map<std::string,std::any>;
    
public:
    virtual void accept(iSerializer& serial);
    auto& type() { return m_type; }
    virtual std::unique_ptr<Item> clone() = 0;
    
    void setid(std::size_t id) { m_id = id;}
    auto getId() { return m_id;}

private:
    std::size_t getNextId(){
        static std::size_t count{0};
        return count++;
    }

protected:
    Type m_type;

private:
    std::size_t m_id;

};

#endif //ITEM_HPP
