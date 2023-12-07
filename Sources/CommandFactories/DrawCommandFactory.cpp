#include "DrawCommandFactory.hpp"

#include "../Commands/DrawCommand.hpp"

// draw -id id -o filepath

// where ["-o" = output file path]
std::unique_ptr<Command> DrawCommandFactory::createCommand(const std::string &input) 
{   
    Tokenizer tokenizer;
    auto tokens = tokenizer.split(input);
    auto id = std::stoi(tokens[2]);
    auto filePath = tokens[4];
    auto cmd = std::make_unique<DrawCommand>(m_doc,id,filePath);
    return std::move(cmd);
}