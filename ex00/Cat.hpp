#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"


class Cat: public Animal
{
public:
	// Constructors
	Cat();
	Cat(const Cat& other);
	Cat(const std::string& typeName);
	Cat&	operator=(const Cat& other);

	// Destructor
	~Cat();

	// Member Functions
	void	makeSound() const;
private:
};


#endif