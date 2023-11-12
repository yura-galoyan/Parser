#include "../Serializer/iSerializer.hpp"
#include "Slide.hpp"
#include <iostream>

void Slide::displayContent() const
{
    std::cout << "displaying all items in slide, with their properties" << std::endl;
}

void Slide::accept(iSerializer &serializer)
{
    serializer.visit(name);
    serializer.visit(m_id);
    for(auto& item: m_items){
        serializer.visit(*item);
    }
}

void Slide::addItem(std::unique_ptr<Item> item)
{
    m_items.push_back(std::move(item));
}

void Slide::removeItem(int id){
    m_items.erase(std::next(m_items.begin(),id));
}