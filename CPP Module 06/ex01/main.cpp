#include "Data.hpp"

int main()
{
    Data *d = new Data;
    d->str = "3.141519";
    uintptr_t u = serialize(d);
    Data *ptr = deserialize(u);
    std::cout<<"d->str:"<<d->str<<std::endl;
    std::cout<<"Result of serialize function: "<<u<<std::endl;
    std::cout<<"Result of deserialize function: "<<ptr->str<<std::endl;

    delete d;
    return 0;
}