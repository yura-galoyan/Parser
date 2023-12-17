#include "Document.hpp"
#include "../Serializer/iSerializer.hpp"

Document::Document()
{
    addSlide(Slide{});
    m_CurrSlideId = 0;
}

void Document::addSlide(const Slide& slide)
{
    ++m_numberOfSlides;
    m_CurrSlideId = m_numberOfSlides - 1;
    m_slides.push_back(slide);
}

void Document::addSlide(Slide&& slide)
{
    ++m_numberOfSlides;
    m_CurrSlideId = m_numberOfSlides - 1;
    m_slides.push_back(std::move(slide));
}

void Document::changeSlide(std::size_t id)
{
    m_CurrSlideId = id;
}


void Document::accept(iSerializer &serial)
{
    serial.visit(name);
    serial.visit(m_numberOfSlides);
    m_slides.resize(m_numberOfSlides);
    for(auto& slide : m_slides){
        slide.accept(serial);
    }
}

void Document::clear()
{
    m_slides.clear();
    m_slides.shrink_to_fit();
}

Slide &Document::getCurrSlide()
{
    return m_slides[m_CurrSlideId];
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
