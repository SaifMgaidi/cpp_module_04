#include "Cat.hpp"

//------------------Constructors--------------------------------------------
Cat::Cat()
:	Animal("Cat")
{
	std::cout << "Cat: default constructor called for \'" << type << "\'\n";
}

Cat::Cat(const std::string& typeName)
:	Animal(typeName)
{
	std::cout << "Cat: parameters constructor called for \'" << type << "\'\n";
}

Cat::Cat(const Cat& other)
:	Animal(other)
{
	std::cout << "Cat: copy constructor called for \'" << type << "\'\n";
}


Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "Cat: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//------------------Destructor--------------------------------------------
Cat::~Cat()
{
	std::cout << "Cat: destructor called for \'" << type << "\'\n";
}


//--------------------Member Functions-------------------------------------------
void	Cat::makeSound() const
{
	std::cout << "Cat named \'" << type << "\': Miaou Miaou !\n";
}
