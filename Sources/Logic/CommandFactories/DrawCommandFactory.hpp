#ifndef DRAW_COMMAND_FACTORY_HPP
#define DRAW_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// @brief TODO:
class Document;
class Slide;

class DrawCommandFactory : public CommandFactory
{
public:
    DrawCommandFactory(std::shared_ptr<Document> doc,[[maybe_unused]]std::shared_ptr<Slide> slide = nullptr) : m_doc(doc) { };
    std::unique_ptr<Command> createCommand(const std::string& input) override;

private:
    std::shared_ptr<Document> m_doc;
};


#endif //DRAW_COMMAND_FACTORY_HPP