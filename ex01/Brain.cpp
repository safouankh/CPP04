#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while(i < 100)
    {
        ideas[i] = "test";
        i++;
    }
    std::cout << "brain constractor called\n";
}

Brain::~Brain()
{
    std::cout << "brain deconstractor called\n";
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain copy operator called\n";
    int i = 0;
    while(i < 100)
    {
        ideas[i] = copy.ideas[i];
        i++;
    }
    return (*this);
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constractor called\n";
    this->operator=(copy);
}