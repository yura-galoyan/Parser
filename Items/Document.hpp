#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <vector>

#include "Slide.hpp"

/// @brief TODO: improve as a c++ class

class iSerializer;

class Document
{
public:
    Document();

public:
    void addSlide(const Slide& slide);
    void addSlide(Slide&& slide);
    void removeSlide(Slide slide);
    void removeSlide(int id);
    void accept(iSerializer& serial);

public:
    Slide& getCurrSlide();
    void displayContent() const;
    void displaySlideContent(int id) const;


private:
    std::string name = "document";
    std::vector<Slide> m_slides;
    std::size_t m_numberOfSlides{0};
    int curr_slide_id;
};


#endif //DOCUMENT_HPP