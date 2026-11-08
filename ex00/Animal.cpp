#include "Animal.hpp"

void    Animal::setType(std::string type)
{
    _type = type;
}

const std::string Animal::getType(void) const
{
    return (_type);
}

Animal::Animal()
{
    std::cout << "animal constructor called\n";
    _type = "Animal";
}

void    Animal::makeSound(void) const
{
    std::cout << "animal sound\n";
}

Animal::~Animal(void)
{
    std::cout << "animal destructor called\n";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "animal copy constructor called\n";
    this->operator=(copy);
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "animal copy operator called\n";
    this->_type = copy._type;
    return (*this);
}
