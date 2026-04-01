#include "Cure.hpp"

//-----------------------Constructors--------------------------------------
Cure::Cure()
:	AMateria("cure")
{
	std::cout << "Cure: default constructor called for \'" << type_ << "\'\n";
}

Cure::Cure(const Cure& other)
:	AMateria(other)
{
	std::cout << "Cure: copy constructor called for \'" << type_ << "\'\n";
}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Cure: copy assignment operator called for \'" << type_ << "\'\n";
	return (*this);
}


//-----------------------Destructor--------------------------------------
Cure::~Cure()
{
	std::cout << "Cure: destructor called for \'" << type_ << "\'\n";
}


//-----------------------Member Functions--------------------------------------
AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}