#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	// Constructors
	Ice();
	Ice(const Ice& other);
	Ice&	operator=(const Ice& other);

	// Destructor
	~Ice();

	// Member Functions
	AMateria*	clone() const;
	void		use(ICharacter& target);
private:
	/* data */
};


#endif