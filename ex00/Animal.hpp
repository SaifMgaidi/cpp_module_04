#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	// Constructors
	Animal();
	Animal(const Animal& other);
	Animal(const std::string& typeName);
	Animal&	operator=(const Animal& other);

	// Destructor
	~Animal();

	// Member Functions
	void	makeSound();

protected:
	std::string	type;
};


#endif