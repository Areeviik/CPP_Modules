#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string arg)
{
    this->Conv_fn(arg);
}

Convert::~Convert(){}

bool Convert::pseudo_literals(std::string str)
{
    if (str == "nan" || str == "nanf" || str == "inf"
        || str == "+inf" || str == "-inf")
            return true;
    return false;
}

void Convert::is_pseudo(std::string str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible" <<std::endl;
        std::cout<<"float: nanf"<<std::endl;
        std::cout<<"double: nan"<<std::endl;
    }
    else if (str == "inf" || str == "+inf")
    {
        std::cout <<"char: impossible"<<std::endl;
        std::cout<<"int: impossible" <<std::endl;
        std::cout<<"float: inff"<<std::endl;
        std::cout<<"double: inf"<<std::endl;
    }
    else if (str == "-inf")
    {
        std::cout <<"char: impossible"<<std::endl;
        std::cout<<"int: impossible" <<std::endl;
        std::cout<<"float: -inff"<<std::endl;
        std::cout<<"double: -inf"<<std::endl;
    }
}

bool Convert::is_char(std::string str)
{
    if (str.length() != 1)
        return (0);
    return (1);
}

bool Convert::is_int(std::string str)
{

}

bool Convert::is_float(std::string str)
{

}

bool Convert::is_double(std::string str)
{

}

void Convert::conv_char(std::string str)
{
    if (str[0] >= '0' && str[0 <= '9'])
        str[0]-=48;
    if (!std::isprint(static_cast<char>(str[0])))
        std::cout<<"char: non displayable"<<std::endl;
    std::cout<<"char: "<<static_cast<char>(str[0])<<std::endl;
    std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
    std::cout<<"float: "<<static_cast<float>(str[0])<<std::endl;
    std::cout<<"double: "<<static_cast<double>(str[0])<<std::endl;
}

void Convert::conv_int(std::string str)
{
    
}

void Convert::conv_float(std::string str)
{
    
}

void Convert::conv_double(std::string str)
{
    
}

void Convert::Conv_fn(std::string str)
{
    if (Convert::pseudo_literals(str) == true)
        Convert::is_pseudo(str);
    else if (is_char(str))
        conv_char(str);
    else if(is_int(str))
        conv_int(str);
    else if (is_float(str))
        conv_float(str);
    else if (is_double(str))
        conv_double(str);
    else
        std::cout<<"Error: argument\n Enter char, int, float or double"<<std::endl;
}
