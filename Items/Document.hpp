#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <vector>

#include "Slide.hpp"

/// @brief TODO: improve ase a c++ class
class Document
{
public:
    void addSlide(const Slide& slide);
    void removeSlide(Slide slide);
    void removeSlide(int id);


public:
    auto& getCurrSlide(){ return m_slides[curr_id]; }

private:
    std::vector<Slide> m_slides;
    int curr_id;
};


#endif //DOCUMENT_HPP