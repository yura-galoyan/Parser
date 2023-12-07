#include "../Serializer/iSerializer.hpp"
#include "Slide.hpp"
#include <iostream>
#include <algorithm>

Slide::Slide()
{
    m_id = s_count++;
}

Slide::Slide(const Slide& other)
{
    m_id = other.m_id;
    m_numberOfItems = other.m_numberOfItems;
    name = other.name;
    for(auto& item : other.m_items){
        m_items.push_back(item->clone());
    }
}

Slide& Slide::operator=(Slide other)
{
    swap(other);
    return *this;
}

void Slide::swap(Slide& other) noexcept {
    using std::swap;
    
    swap(m_id,other.m_id);
    swap(m_numberOfItems,other.m_numberOfItems);
    swap(name,other.name);
    swap(m_items, other.m_items);
}

Slide::Slide(Slide &&other)
{
    m_id = other.m_id;
    m_numberOfItems = other.m_numberOfItems;
    name = other.name;
    m_items = std::move(other.m_items);
}

void Slide::displayContent() const
{
    std::cout << "displaying all items in slide, with their properties" << std::endl;
}

void Slide::accept(iSerializer &serializer)
{
    serializer.visit(name);
    serializer.visit(m_id);
    serializer.visit(m_numberOfItems);
    m_items.resize(m_numberOfItems);
    for(auto& item: m_items){
        if(!item){
            Item::Type t;
            serializer.visit(t);
            
        }
        serializer.visit(item);
    }
}

void Slide::addItem(std::unique_ptr<Item> item)
{
    m_items.push_back(std::move(item));
    ++m_numberOfItems;
}

bool Slide::removeItem(int id){

    auto itemIteratorToErase = std::remove_if(m_items.begin(),m_items.end(), [id](const auto& item){
        return item->getId() == id;
    }   );

    if(itemIteratorToErase !=  m_items.end()){
        m_items.erase(itemIteratorToErase);
        --m_numberOfItems;
        return true;
    }
    return false;

}