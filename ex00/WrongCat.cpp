#include "WrongCat.hpp"

//------------------Constructors--------------------------------------------
WrongCat::WrongCat()
:	WrongAnimal("Cat")
{
	std::cout << "WrongCat: default constructor called for \'" << type << "\'\n";
}

WrongCat::WrongCat(const std::string& typeName)
:	WrongAnimal(typeName)
{
	std::cout << "WrongCat: parameters constructor called for \'" << type << "\'\n";
}

WrongCat::WrongCat(const WrongCat& other)
:	WrongAnimal(other)
{
	std::cout << "WrongCat: copy constructor called for \'" << type << "\'\n";
}


WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//------------------Destructor--------------------------------------------
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called for \'" << type << "\'\n";
}


//--------------------Member Functions-------------------------------------------
void	WrongCat::makeSound() const
{
	std::cout << "WrongCat named \'" << type << "\': Miaou Miaou !\n";
}