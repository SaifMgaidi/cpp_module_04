#ifndef AMATERIA_HPP
# define AMATERIA_HPP


#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string	type_;
public:
	// Constructors
	AMateria();
	AMateria(const AMateria& other);
	AMateria(std::string const & type);
	AMateria&	operator=(const AMateria& other);
	
	// Destructor
	virtual ~AMateria();

	// Member Functions
	std::string	const & getType() const;
	virtual AMateria*	clone() const = 0;
	// virtual void use(ICharacter& target);
};


#endif