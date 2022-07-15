#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal *animal;
    animal->makeSound();
    std::cout<<"Can't instantiate Animal class, cos it's an abstract class"<<std::endl;
    return 0;
}
