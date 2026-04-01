#include "Ice.hpp"

//-----------------------Constructors--------------------------------------
Ice::Ice()
:	AMateria("ice")
{
	std::cout << "Ice: default constructor called for \'" << type_ << "\'\n";
}

Ice::Ice(const Ice& other)
:	AMateria(other)
{
	std::cout << "Ice: copy constructor called for \'" << type_ << "\'\n";
}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Ice: copy assignment operator called for \'" << type_ << "\'\n";
	return (*this);
}


//-----------------------Destructors--------------------------------------
Ice::~Ice()
{
	std::cout << "Ice: destructor called for \'" << type_ << "\'\n";
}


//-----------------------Member Functions--------------------------------------
AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}