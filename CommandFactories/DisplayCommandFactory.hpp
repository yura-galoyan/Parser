#ifndef DISPLAY_COMMAND_FACTORY_HPP
#define DISPLAY_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// @brief TODO:
class Document;
class Slide;

class DisplayCommandFactory : public CommandFactory
{
public:
    DisplayCommandFactory(std::shared_ptr<Document> doc, std::shared_ptr<Slide> slide = nullptr) : m_doc(doc) { };
    std::unique_ptr<Command> createCommand(const std::string& input) override;

private:
    std::shared_ptr<Document> m_doc;
};


#endif //DISPLAY_COMMAND_FACTORY_HPP