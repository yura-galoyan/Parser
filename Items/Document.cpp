#include "Document.hpp"

void Document::addSlide(const Slide &slide)
{
    m_slides.push_back(slide);
}