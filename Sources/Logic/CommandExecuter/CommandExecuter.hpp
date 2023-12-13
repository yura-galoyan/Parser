#ifndef COMMAND_EXECUTER_HPP
#define COMMAND_EXECUTER_HPP

#include "../Items/Document.hpp"

#include "../CommandFactories/CommandFactoryRegistry.hpp"
#include "../ParsingUtils/CommandParser.hpp"
#include "../ParsingUtils/Tokenizer.hpp"

class CommandExecuter
{
public:
    CommandExecuter();



public:
    void setCommand(const std::string& command);
    void execute();

    auto isAppropriateCommand(){
        return m_bIsAppropriateCommand;
    }
    auto getLogMessage() { return m_sLogMessage; }

private:
    CommandFactoryRegistry m_commandFactoryRegistry;
    CommandParser m_parser;
    std::unique_ptr<Command> m_pCommand;
    bool m_bIsAppropriateCommand;

    std::string m_sLogMessage;
};


#endif //COMMAND_EXECUTER_HPP
