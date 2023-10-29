#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "Slide.hpp"

class Document
{
public:
    void addSlide();
    void removeSlide(Slide slide);
    void removeSlide(int id);


public:
    auto& getCurrSlide(){ return slides[curr_id]; }



private:
    std::vector<Slide> slides;
    int curr_id;
};


#endif //DOCUMENT_HPP