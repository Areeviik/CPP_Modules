#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout<<"Invalid number of arguments\n"<<"Usage: [./convert {argument}]\n";
    else
        Convert obj(argv[1]);
    return 0;
}