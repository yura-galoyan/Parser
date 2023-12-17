#ifndef ITEMS_TEXT_HPP
#define ITEMS_TEXT_HPP


#include "Item.hpp"

class Text : public Item
{
public:
    Text() {
        m_type = Item::Type::Text;
    };
    Text(Point topLeft, Point bottomRight, std::string textContent);
    void accept(iSerializer& visitor)  override;
    std::unique_ptr<Item> clone() override { return std::make_unique<Text>(*this); };

    std::string getText() { return m_text; }

private:
    std::string m_text;
};


#endif //ITEMS_TEXT_HPP
