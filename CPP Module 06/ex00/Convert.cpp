#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string arg)
{
    this->Conv_fn(arg);
}

Convert::~Convert(){}

bool Convert::pseudo_literals(std::string str)
{
    if (str == "nan" || str == "nanf" || str == "inf" || str == "+inff"
        || str == "+inf" || str == "-inf" || str == "-inff")
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
    else if (str == "inf" || str == "+inf" || str == "+inff")
    {
        std::cout <<"char: impossible"<<std::endl;
        std::cout<<"int: impossible" <<std::endl;
        std::cout<<"float: inff"<<std::endl;
        std::cout<<"double: inf"<<std::endl;
    }
    else if (str == "-inf" || str == "-inff")
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
    int i = 0;
    if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
        return 0;
    while (str.c_str()[i])
    {
        if (isdigit(str.c_str()[i]))
            i++;
        else
            return 0;
    }
    return 1;
}

bool Convert::is_float(std::string str)
{
    if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
        return 0;
    int i = 0;
    int point = 0;
    while (i < str.length())
    {
        if (i == (str.length() - 1) && str[i] == 'f')
            return 1;
        if (!isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (point)
                    return 0;
                point = 1;
            }
            else
                return 0;
        }
        i++;
    }
    return 0;
}

bool Convert::is_double(std::string str)
{
    int i = 0;
    int point = 0;
    if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
        return 0;
    while (i < str.length())
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (point)
                    return 0;
                point = 1;
            }
            else
                return 0;
        }
        i++;
    }
    return 1;
}

void Convert::conv_char(std::string str)
{
    if (str[0] >= '0' && str[0 <= '9'])
        str[0]-=48;
    if (!std::isprint(static_cast<char>(str[0])))
        std::cout<<"char: non displayable"<<std::endl;
    else
        std::cout<<"char: "<<static_cast<char>(str[0])<<std::endl;
    std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
    std::cout<<"float: "<<static_cast<float>(str[0])<<std::endl;
    std::cout<<"double: "<<static_cast<double>(str[0])<<".0"<<std::endl;
}

void Convert::conv_int(std::string str)
{
    double num = strtod(str.c_str(), NULL);
    if (!std::isprint(static_cast<int>(num)))
        std::cout<<"char: non displayable"<<std::endl;
    else
        std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
    std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
    std::cout<<"float: "<<static_cast<float>(num)<<".0f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(num)<<".0"<<std::endl;
}

void Convert::conv_float(std::string str)
{
    double num = strtod(str.c_str(), NULL);
    if (!std::isprint(static_cast<int>(num)))
        std::cout<<"char: non displayable"<<std::endl;
    else
        std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
    //presicion
    std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
    std::cout<<"float: "<<static_cast<float>(num)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(num)<<std::endl;
}

void Convert::conv_double(std::string str)
{
    double num = strtod(str.c_str(), NULL);
    if (!std::isprint(static_cast<int>(num)))
        std::cout<<"char: non displayable"<<std::endl;
    else
        std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
    std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
    std::cout<<"float: "<<static_cast<float>(num)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(num)<<std::endl;
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
