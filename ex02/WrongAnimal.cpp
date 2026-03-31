#include "WrongAnimal.hpp"

//-------------------------Constructors-----------------------------------
WrongAnimal::WrongAnimal()
:	type("")
{
	std::cout << "WrongAnimal: default constructor called for \'" << type << "\'\n";
}


WrongAnimal::WrongAnimal(const WrongAnimal& other)
:	type(other.type)
{
	std::cout << "WrongAnimal: copy constructor called for \'" << type << "\'\n";
}


WrongAnimal::WrongAnimal(const std::string& typeName)
:	type(typeName)
{
	std::cout << "WrongAnimal: parameters constructor called for \'" << type << "\'\n";
}


WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "WrongAnimal: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//-------------------------Destructor-----------------------------------
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called for \'" << type << "\'\n";
}


//-------------------------Member Functions-----------------------------------
std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal named \'" << type << "\': generic sound !\n";
}
