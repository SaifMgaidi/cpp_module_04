#include "Brain.hpp"

//----------------------Constructors------------------------------------
Brain::Brain()
{
	std::cout << "Brain: default constructor called\n";
}

Brain::Brain(const Brain& other)
{
	for (unsigned int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
	std::cout << "Brain: copy constructor called\n";
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (unsigned int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	std::cout << "Brain: copy assignment operator called\n";
	return (*this);
}

//------------------------Destructor---------------------------------------------------
Brain::~Brain()
{
	std::cout << "Brain: destructor called\n";
}



void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
		return ;
	ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (ideas[index]);
}