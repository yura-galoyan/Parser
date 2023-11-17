#ifndef IO_BASE_HPP
#define IO_BASE_HPP

#include <string>

class IOBase
{
public:
    virtual std::string getInput() = 0;
    virtual void output() = 0;
};


#endif //IO_BASE_HPP