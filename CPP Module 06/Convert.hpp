#ifndef Convert_HPP
#define Convert_HPP

#include <iostream>
#include <cstring>

class Convert
{
    private:
        std::string str;
    public:
        Convert();
        Convert(std::string arg);
        ~Convert();
        void Conv_fn(std::string str);
        bool pseudo_literals(std::string arg);
        void is_pseudo(std::string str);
        bool is_char(std::string str);
        void conv_char(std::string str);
        bool is_int(std::string str);
        void conv_int(std::string str);
        bool is_float(std::string str);
        void conv_float(std::string str);
        bool is_double(std::string str);
        void conv_double(std::string str);
};



#endif