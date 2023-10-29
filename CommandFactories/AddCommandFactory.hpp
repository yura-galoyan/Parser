#ifndef ADD_COMMAND_FACTORY_HPP
#define ADD_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"
#include "../ItemFactories/ItemFactoryRegistry.hpp"


class AddCommandFactory : public CommandFactory
{
public:
    AddCommandFactory(std::shared_ptr<Document> doc, std::shared_ptr<Slide> slide) : m_doc(doc) { };
    std::unique_ptr<Command> createCommand(const std::string& input) override;
    /// @brief implement
    void setDocument(std::shared_ptr<Document> doc);
    /// @brief implement
    void setSlide(std::shared_ptr<Document> doc);

private:
    std::shared_ptr<Document> m_doc;
    ItemFactoryRegistry m_itemRegistry;

};


#endif //ADD_COMMAND_FACTORY_HPP