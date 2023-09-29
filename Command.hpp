#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>


class Command{
public:
    virtual std::string exec() = 0;
};

#endif //COMMAND_HPP