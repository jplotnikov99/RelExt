#pragma once
namespace DT {

#define ASSERT(statement, message)     \
    if (!(statement)) {                \
        std::cout << message << ".\n"; \
        exit(1);                       \
    }

}  // namespace DT
