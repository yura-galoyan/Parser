#include "Document.hpp"

Document::Document()
{
    addSlide(Slide{});
    curr_slide_id = 0;
}

void Document::addSlide(const Slide &slide)
{
    m_slides.push_back(slide);
}

void Document::addSlide(Slide&& slide)
{
    m_slides.push_back(std::move(slide));
}