#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual           ~Animal(void);
        Animal            &operator=(const Animal &copy);
        virtual void      makeSound(void) const = 0;
        void              setType(std::string type);
        const std::string getType(void) const;
};

#endif