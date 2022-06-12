#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        void announce(std::string name);
        void set_name(std::string n);
        std::string get_name() const;
        Zombie();
        ~Zombie();
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif