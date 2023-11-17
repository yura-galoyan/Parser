#ifndef ANY_HELPER_HPP
#define ANY_HELPER_HPP

#include <any>

template<typename T>
T getAs(const std::any& value){
    return std::any_cast<T>(value);
}


#endif //ANY_HELPER_HPP