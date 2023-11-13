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

    Slide();
    Slide(std::size_t id) { m_id = id; }
    /// TODO: implement
    Slide(const Slide& other);
    //Slide& operator=(const Slide& other);
//
    //Slide(Slide&& other);
    //Slide& operator=(Slide&& other);

public:
    void displayContent() const ;
    void accept(iSerializer& serializer);

public:
    auto begin() { return m_items.begin(); }
    auto end() { return m_items.end(); }
    auto begin() const { return m_items.cbegin(); }
    auto end() const { return m_items.cend(); }
    auto cbegin() { return m_items.cbegin(); }
    auto cend() { return m_items.cend(); }
    
public:
    void setId(std::size_t id) { m_id = id; };
    void addItem(std::unique_ptr<Item> m_item );
    void removeItem(int id);

public:
    auto getId() { return m_id; }

private:
    std::size_t m_id;
    std::size_t m_numberOfItems{0};
    std::string name{"slide"};
    std::list<std::unique_ptr<Item>> m_items;

    auto& count() { return s_count; }

private:
    inline static std::size_t s_count{0};
};


#endif //SLIDE_HPP