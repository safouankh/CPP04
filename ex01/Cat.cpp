#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : idea(new Brain())
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
    delete idea;
}

Cat::Cat(const Cat &copy) : Animal(copy) , idea(new Brain(*copy.idea))
{
    std::cout << "cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "cat copy operator called\n";
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete idea;
        idea = NULL;
        idea = new Brain(*copy.idea);
    }
    return (*this);
}
