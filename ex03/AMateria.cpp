#include "AMateria.hpp"

//-------------------------Constructors-----------------------------------------------
AMateria::AMateria()
:	type_("")
{
	std::cout << "AMateria: default constructor called for \'" << type_ << "\'\n";
}

AMateria::AMateria(const AMateria& other)
:	type_(other.type_)
{
	std::cout << "AMateria: copy constructor called for \'" << type_ << "\'\n";
}


AMateria::AMateria(std::string const & type)
:	type_(type)
{
	std::cout << "AMateria: parameters constructor called for \'" << type_ << "\'\n";
}


AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
	}
	std::cout << "AMateria: copy assignment operator called for \'" << type_ << "\'\n";
	return (*this);
}


//-------------------------Destructor-----------------------------------------------
AMateria::~AMateria()
{
	std::cout << "AMateria: destructor called for \'" << type_ << "\'\n";
}


//-------------------------Member Functions-----------------------------------------------
std::string	const & AMateria::getType() const
{
	return (type_);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: member function use() is called for the target: " << target.getName() << "\n";
}
