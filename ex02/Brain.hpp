#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        Brain();
        ~Brain();
};

#endif