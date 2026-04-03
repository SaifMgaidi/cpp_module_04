#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource: public IMateriaSource
{
public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);
	
	// Destructor
	~MateriaSource();

	// Member Functions
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
private:
	AMateria*	materias_[4];
};

#endif