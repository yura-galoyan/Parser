#include "Document.hpp"
#include "../Serializer/iSerializer.hpp"

Document::Document()
{
    addSlide(Slide{});
    curr_slide_id = 0;
}

void Document::addSlide(const Slide& slide)
{

    ++curr_slide_id;
    ++m_numberOfSlides;
    m_slides.push_back(slide);
}

void Document::addSlide(Slide&& slide)
{
    ++curr_slide_id;
    ++m_numberOfSlides;
    m_slides.push_back(std::move(slide));
}

void Document::accept(iSerializer &serial)
{
    // write another accept function, for deserialization, 
    // where number of all slides and items is precalculated. 
    serial.visit(name);
    serial.visit(m_numberOfSlides);
    m_slides.resize(m_numberOfSlides);

    for(auto& slide : m_slides){
        slide.accept(serial);
    }
}

Slide &Document::getCurrSlide()
{
    return m_slides[curr_slide_id];
}

void Document::displayContent() const
{
    for(const auto& slide : m_slides){
        slide.displayContent();
    }
}

void Document::displaySlideContent(int id) const
{
    m_slides[id].displayContent();
}
