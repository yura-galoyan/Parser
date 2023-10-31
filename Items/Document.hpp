#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <vector>

#include "Slide.hpp"

/// @brief TODO: improve as a c++ class

class Document
{
public:
    Document();
    Document(const Document&);
    Document(Document&&);
    Document& operator=(const Document& );
    Document& operator=(Document&& );

    auto begin() { m_slides.begin(); }
    
    auto begin() const { m_slides.cbegin(); }
    
    auto cbegin() { m_slides.cbegin(); }

    auto end() { m_slides.end(); }
    
    auto end() const { m_slides.cend(); }
    auto cend() { m_slides.cend(); }

    void addSlide(const Slide& slide);
    void addSlide(Slide&& slide);
    void removeSlide(Slide slide);
    void removeSlide(int id);


public:
    auto& getCurrSlide(){ return m_slides[curr_slide_id]; }

private:
    std::vector<Slide> m_slides;
    int curr_slide_id;
};


#endif //DOCUMENT_HPP