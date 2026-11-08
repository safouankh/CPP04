#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(const Dog &copy);
        Dog();
        Dog     &operator=(const Dog &copy);
        void    makeSound(void) const;
        ~Dog(void);
};

#endif