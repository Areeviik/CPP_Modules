#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void)
{
    int num = rand() % 3;
    if (num == 1)
    {
        std::cout <<"A generated"<<std::endl;
        return new A();
    }
    else if (num == 2)
    {
        std::cout <<"B generated"<<std::endl;
        return new B();
    }
    else
    {
        std::cout <<"C generated"<<std::endl;
        return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"the type is A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"the type is B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"the type is C"<<std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout<<"the type is A"<<std::endl;
    }
    catch(const std::exception& e){ }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout<<"the type is B"<<std::endl;
    }
    catch(const std::exception& e){ }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout<<"the type is C"<<std::endl;
    }
    catch(const std::exception& e){ }
}


int main()
{
    Base *p;
    p = generate();
    identify(p);
    identify(*p);

    delete p;
}