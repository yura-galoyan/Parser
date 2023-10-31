#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <vector>

#include "Slide.hpp"

/// @brief TODO: improve as a c++ class

class Document
{
public:
    Document();

public:
    void addSlide(const Slide& slide);
    void addSlide(Slide&& slide);
    void removeSlide(Slide slide);
    void removeSlide(int id);

public:
    Slide& getCurrSlide();
    void displayContent() const;
    void displaySlideContent(int id) const;


private:
    std::vector<Slide> m_slides;
    int curr_slide_id;
};


#endif //DOCUMENT_HPP