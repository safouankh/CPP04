#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "dog constructor called\n";
    _type = "Dog";
}

void    Dog::makeSound(void) const
{
    std::cout << "haw haw\n";
}

Dog::~Dog(void)
{
    std::cout << "dog destructor called\n";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "dog copy operator called\n";
    Animal::operator=(copy);
    return (*this);
}
