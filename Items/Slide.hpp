#ifndef SLIDE_HPP
#define SLIDE_HPP

#include <vector>
#include <list>
#include <memory>

#include "Item.hpp"
/// @brief TODO: improve ase a c++ class
class Slide
{
public:

    Slide() = default;
    
    Slide(const Slide& other);
    Slide& operator=(Slide other);
//
    //Slide(Slide&& other);
    //Slide& operator=(Slide&& other);

public:
    void displayContent() const ;

public:
    auto begin() { return m_items.begin(); }
    auto end() { return m_items.end(); }
    auto begin() const { return m_items.cbegin(); }
    auto end() const { return m_items.cend(); }
    auto cbegin() { return m_items.cbegin(); }
    auto cend() { return m_items.cend(); }

public:
    void addItem(std::unique_ptr<Item> m_item );
    void removeItem(int id);

private:
    std::list<std::unique_ptr<Item>> m_items;

};


#endif //SLIDE_HPP