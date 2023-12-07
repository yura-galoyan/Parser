#include "CommandExecuter.hpp"

CommandExecuter::CommandExecuter(std::shared_ptr<Document> doc)
    : m_pDocument{doc}, m_commandFactoryRegistry{m_pDocument}
{
}

void CommandExecuter::setCommand(const std::string& command)
{
    m_bIsAppropriateCommand = true;
    auto cmdName = m_parser.parse(command);
    std::string errorComment;
    try
    {
        m_pCommand = m_commandFactoryRegistry[cmdName]->createCommand(command);
    }
    catch(const std::exception& e)
    {
        errorComment = e.what();
        std::cerr << e.what() << '\n';
        m_bIsAppropriateCommand = false;
    }
    // do something with errorComment
}

void CommandExecuter::execute(){
    m_sLogMessage = m_pCommand->exec();
}