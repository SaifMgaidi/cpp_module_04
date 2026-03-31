#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

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
	void		makeSound() const;
	void		setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;

private:
	Brain*	brain;
};

#endif