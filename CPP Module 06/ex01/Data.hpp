#ifndef Data_HPP
#define Data_HPP

#include <iostream>

typedef struct s_Data
{
    std::string str;
}Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif