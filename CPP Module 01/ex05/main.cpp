#include "Karen.hpp"

int main()
{
    Karen obj;
    std::string inp;

    std::cout<<"\033[1;31mPlease enter one of these levels: DEBUG, INFO, WARNING, ERROR\033[0m"<<std::endl;
    std::cin>>inp;
    obj.complain(inp);
    std::cout<<"\033[1;35m---------------------------------------------\033[0m\n";
    std::cout<<"Here are examples for all levels"<<std::endl;
    std::cout<<"\033[1;35m---------------------------------------------\033[0m\n";
    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
    return 0;
}