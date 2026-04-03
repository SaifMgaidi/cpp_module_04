#include "MateriaSource.hpp"

//---------------------------Constructors------------------------------------
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		materias_[i] = NULL;
	std::cout << "MateriaSource: default constructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.materias_[i])
			materias_[i] = other.materias_[i]->clone();
		else
			materias_[i] = NULL;
	}
	std::cout << "MateriaSource: copy constructor called\n";
}


MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete materias_[i];
			if (other.materias_[i])
				materias_[i] = other.materias_[i]->clone();
			else
				materias_[i] = NULL;
		}
	}
	std::cout << "MateriaSource: copy assignment operator called\n";
	return (*this);
}


//---------------------------Destructor------------------------------------
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete materias_[i];
	std::cout << "MateriaSource: destructor called\n";
}


//---------------------------Member Functions------------------------------------
void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (materias_[i] == NULL)
		{
			materias_[i] = m;
			break ;
		}
	}
}


AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (materias_[i] != NULL && materias_[i]->getType() == type)
			return (materias_[i]->clone());
	}
	return (NULL);
}
