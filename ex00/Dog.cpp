#include "Dog.hpp"

//----------------------Constructors--------------------------------
Dog::Dog()
:	Animal("Dog")
{
	std::cout << "Dog: default constructor called for \'" << type << "\'\n";
}

Dog::Dog(const Dog& other)
:	Animal(other)
{
	std::cout << "Dog: copy constructor called for \'" << type << "\'\n";
}


Dog::Dog(const std::string& typeName)
:   Animal(typeName)
{
	std::cout << "Dog: parameters constructor called for \'" << type << "\'\n";
}


Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "Dog: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//-------------------Destructor------------------------------------------------
Dog::~Dog()
{
	std::cout << "Dog: destructor called for \'" << type << "\'\n";
}



//--------------------Member Functions-------------------------------------------
void	Dog::makeSound() const
{
	std::cout << "Dog named \'" << type << "\': Waouf Waouf !\n";
}
