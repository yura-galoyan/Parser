#ifndef TXT_DESERIALIZER_HPP
#define TXT_DESERIALIZER_HPP

#include "iSerializer.hpp"

class TxtDeserializer : public iSerializer
{
public:
    void visit(double& val) override ;
    void visit(std::size_t& val) override;
    void visit(Point& point) override ;
    void visit(std::string&& val) override ;
    void visit(std::string& val) override ;
    void visit(Item::Type& type) override;
    void visit(std::unique_ptr<Item>& item) override ;
    void visit(Slide& slide) override ;
    void visit(std::vector<Slide>& slides) override ;
    void visit(Document& doc) override ;

private:
    Item::Type m_last_type;
    std::string m_lastToken;
};

#endif //TXT_DESERIALIZER_HPP