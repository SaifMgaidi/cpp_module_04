#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
public:
	// Constructors
	Dog();
	Dog(const Dog& other);
	Dog(const std::string& typeName);
	Dog&	operator=(const Dog& other);

	// Destructor
	~Dog();

	// Member Functions
	void	makeSound();

private:
};

#endif