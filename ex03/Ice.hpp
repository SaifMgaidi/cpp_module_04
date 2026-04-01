#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

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
private:
	/* data */
};


#endif