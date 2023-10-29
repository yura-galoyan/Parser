#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <memory>
#include "Tokenizer.hpp"
#include "Item.hpp"

class Command{
public:
    virtual std::string exec() = 0;
};

#endif //COMMAND_HPP