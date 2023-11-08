#ifndef SAVECOMMAND_HPP
#define SAVECOMMAND_HPP

#include "../Items/Document.hpp"
#include "Command.hpp"


class SaveCommand
{
public:
    SaveCommand(std::shared_ptr<Document> doc);
    std::string exec();

private:
    std::shared_ptr<Document> m_doc;
    
};


#endif //SAVECOMMAND_HPP