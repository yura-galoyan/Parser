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
    void changeSlide(std::size_t id);
    void removeSlide(Slide slide);
    void removeSlide(int id);
    void accept(iSerializer& serial);
    void clear();

public:
    Slide& getCurrSlide();
    auto& getSlide(int id) { return m_slides[id];  }
    auto getCurrSlideId() { return m_CurrSlideId; }
    void displayContent() const;
    void displaySlideContent(int id) const;

public:
    auto begin() { return m_slides.begin(); }
    auto end() { return m_slides.end(); }
    auto begin() const { return m_slides.cbegin(); }
    auto end() const { return m_slides.cend(); }
    auto cbegin() { return m_slides.cbegin(); }
    auto cend() { return m_slides.cend(); }

private:
    std::string name = "document";
    std::vector<Slide> m_slides;
    std::size_t m_numberOfSlides{0};
    int m_CurrSlideId;
};


#endif //DOCUMENT_HPP
