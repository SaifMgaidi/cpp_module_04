#include "Animal.hpp"


//-------------------------Constructors-----------------------------------
Animal::Animal()
:	type("")
{
	std::cout << "Animal: default constructor called for \'" << type << "\'\n";
}

Animal::Animal(const Animal& other)
:	type(other.type)
{
	std::cout << "Animal: copy Constructor called for \'" << type << "\'\n";
}


Animal::Animal(const std::string& typeName)
:	type(typeName)
{
	std::cout << "Animal: parameters constructor called for \'" << type << "\'\n";
}


Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "Animal: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//-------------------------Destructor-----------------------------------
Animal::~Animal()
{
	std::cout << "Animal: destructor called for \'" << type << "\'\n";
}



//-------------------Member Functions------------------------------------------
std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal named \'" << type << "\': generic sound !\n";
}

