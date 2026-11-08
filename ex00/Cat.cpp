#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "cat constructor called\n";
    _type = "Cat";
}

void    Cat::makeSound(void) const
{
    std::cout << "myaw myaw\n";
}

Cat::~Cat(void)
{
    std::cout << "cat destructor called\n";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "cat copy operator called\n";
    Animal::operator=(copy);
    return (*this);
}
