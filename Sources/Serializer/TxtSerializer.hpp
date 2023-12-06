#ifndef SERIALIZER_TXT_SERIALIZER_HPP
#define SERIALIZER_TXT_SERIALIZER_HPP


#include "iSerializer.hpp"
class TxtSerializer : public iSerializer
{
public:
    void visit(double& val) override ;
    void visit(std::size_t& val) override;
    void visit(Point& val) override ;
    void visit(std::string&& val) override ;
    void visit(std::string& val) override ;
    void visit(Item::Type& type) override;
    void visit(std::unique_ptr<Item>& val) override ;
    void visit(std::vector<Slide>& slides) override;
    void visit(Slide& val) override ;
    void visit(Document& val) override ;

};




#endif //SERIALIZER_TXT_SERIALIZER_HPP