#ifndef SLIDE_HPP
#define SLIDE_HPP

#include <vector>
#include <memory>

#include "Item.hpp"
/// @brief TODO: improve ase a c++ class
class Slide
{
public:
    /// TODO: write copy constructor
    
    void addItem(/*,*/ );
    void removeItem(int id);

private:
    std::vector<std::shared_ptr<Item>> items;

};


#endif //SLIDE_HPP