#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;    //check pointer type
    std::string &stringREF = str;


    std::cout<<"The memory address of the string variable is: "<<&str<<std::endl;
    std::cout<<"The memory address held by stringPTR is: "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF is: "<<&stringREF<<std::endl;
    
    std::cout<<"The value of the string variable is: "<<str<<std::endl;
    std::cout<<"The value of pointed to by stringPTR is: "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF is: "<<stringREF<<std::endl;

    return 0;
}