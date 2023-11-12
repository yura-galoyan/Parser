#include "Document.hpp"
#include "../Serializer/iSerializer.hpp"

Document::Document()
{
    addSlide(Slide{});
    curr_slide_id = 0;
}

void Document::addSlide(const Slide &slide)
{
    ++curr_slide_id;
    m_slides.push_back(slide);
}

void Document::addSlide(Slide&& slide)
{
    ++curr_slide_id;
    m_slides.push_back(std::move(slide));
}

void Document::accept(iSerializer &serial)
{
    // write another accept function, for deserialization, 
    // where number of all slides and items is precalculated. 
    serial.visit(name);
    Slide slide;
    serial.visit(slide);
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
