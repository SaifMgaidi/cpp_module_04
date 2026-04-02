#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	// Constructors
	Cure();
	Cure(const Cure& other);
	Cure&	operator=(const Cure& other);
	
	// Destructor
	~Cure();

	// Member Functions
	AMateria*	clone() const;
	void		use(ICharacter& target);
private:
	/* data */
};


#endif