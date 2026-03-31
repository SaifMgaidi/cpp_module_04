#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat(const std::string& typeName);
	WrongCat&	operator=(const WrongCat& other);

	// Destructor
	~WrongCat();

	// Member Functions
	void	makeSound() const;
private:
};


#endif