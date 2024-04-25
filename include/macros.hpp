#pragma once
#include "result_error_pair.hpp"
namespace DT
{

#define ASSERT(statement, message)\
    if(statement)\
        std::cout << message << std::endl;

} // namespace DT
