#include "Slide.hpp"

#include <iostream>

Slide::Slide(const Slide &other)
{
    Slide slide;
    for(auto& item : other){
        slide.m_items.push_back(item->clone());
    }
    std::swap(m_items, slide.m_items);
}

Slide &Slide::operator=(Slide other)
{
    std::swap(other.m_items,m_items);
}

void Slide::displayContent() const
{
    std::cout << "displaying all items in slide, with their properties" << std::endl;
}

void Slide::addItem(std::unique_ptr<Item> item)
{
    m_items.push_back(std::move(item));
}

void Slide::removeItem(int id){
    m_items.erase(std::next(m_items.begin(),id));
}