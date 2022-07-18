#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int num = 7;
    Animal *animals[num];
    Brain *brain;


    for (int i = 0; i < num; i++)
    {
        if (i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        animals[i]->makeSound();

    }

    for (int i = 0; i < num; i++)
    {
        printf("aaaa    aygaigusfghaiufhr aisgiuvsha\n");
        // brain = animals[i]->getBrain();
        brain->setIdeas("great idea",0);
        brain->setIdeas("bad idea", 1);
        brain->setIdeas("no idea", 2);
    }

    for (int i = 0; i < num; i++)
    {
        // brain = animals[i]->getBrain();
        std::cout<<brain->getIdeas(0)<<std::endl;
    }

    for(int i = 0; i < num; i++)
    {
        delete animals[i];
    }
    return 0;
}
