#ifndef ITEM_HPP
#define ITEM_HPP

#include <unordered_map>
#include <memory>
#include <string>



#include "Utils/BoundingBox.hpp"

class iSerializer;

class Item
{
public:
    Item(){
        m_id = getNextId();
    };
    enum class Type : std::size_t{
        Rect = 100, Circle = 200, Text = 300
    };
    
public:
    virtual void accept(iSerializer& serial);
    auto& type() { return m_type; }
    virtual std::unique_ptr<Item> clone() = 0;
    
    void setid(std::size_t id) { m_id = id;}
    auto getId() { return m_id;}

    void setColor(Qt::GlobalColor color){
        m_color = color;
    }

    Qt::GlobalColor getColor(){
        return m_color;
    }

    auto getBoundingBox(){
        return m_BBox;
    }

    void setBoundingBox(Point p1, Point p2){
        m_BBox = BoundingBox{p1,p2};
    }

    auto& boundingBox(){
        return m_BBox;
    }

private:
    std::size_t getNextId(){
        static std::size_t count{0};
        return count++;
    }

protected:
    Type m_type;

private:
    std::size_t m_id;
    BoundingBox m_BBox;
    Qt::GlobalColor m_color;

};

#endif //ITEM_HPP
