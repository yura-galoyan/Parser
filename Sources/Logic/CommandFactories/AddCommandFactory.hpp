#ifndef ADD_COMMAND_FACTORY_HPP
#define ADD_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"
#include "../ItemFactories/ItemFactoryRegistry.hpp"

/// FIXME: resolve this 
class Document;
class Slide;

class AddCommandFactory : public CommandFactory
{
public:
    AddCommandFactory( std::shared_ptr<Slide> slide = nullptr)  { };
    std::unique_ptr<Command> createCommand(const std::string& input)  override;


private:
    ItemFactoryRegistry m_itemRegistry;

};


#endif //ADD_COMMAND_FACTORY_HPP