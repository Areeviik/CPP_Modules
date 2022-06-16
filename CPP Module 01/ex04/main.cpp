#include <iostream>
#include <string.h>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream fn;
    std::string s1;
    std::string s2;
    std::string fcopy;

    if (argc != 4)
    {
        std::cout<<"Wrong number of arguments"<<std::endl;
        std::cout<<"Program takes three arguments: filename, string1 and string 2"<<std::endl;
        return -1;
    }
    fn.open(argv[1]);
    if (!fn)
        std::cout<<"Can't open a file"<<std::endl;
    s1 = argv[2];
    s2 = argv[3];

    fcopy = argv[1] + ".replace";


}