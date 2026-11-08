#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : idea(new Brain())
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
    delete idea;
}

Dog::Dog(const Dog &copy) : Animal(copy) , idea(new Brain(*copy.idea))
{
    std::cout << "dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "dog copy operator called\n";
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete idea;
        idea = NULL;
        idea = new Brain(*copy.idea);
    }
    return (*this);
}
