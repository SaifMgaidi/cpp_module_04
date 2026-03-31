#include "Dog.hpp"

//----------------------Constructors--------------------------------
Dog::Dog()
:	Animal("Dog"), brain(NULL)
{
	brain = new Brain();
	std::cout << "Dog: default constructor called for \'" << type << "\'\n";
}

Dog::Dog(const Dog& other)
:	Animal(other), brain(NULL)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog: copy constructor called for \'" << type << "\'\n";
}


Dog::Dog(const std::string& typeName)
:   Animal(typeName), brain(NULL)
{
	brain = new Brain();
	std::cout << "Dog: parameters constructor called for \'" << type << "\'\n";
}


Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Dog: copy assignment operator called for \'" << type << "\'\n";
	return (*this);
}


//-------------------Destructor------------------------------------------------
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: destructor called for \'" << type << "\'\n";
}



//--------------------Member Functions-------------------------------------------
void	Dog::makeSound() const
{
	std::cout << "Dog named \'" << type << "\': Waouf Waouf !\n";
}

void	Dog::setIdea(int index, std::string idea)
{
	brain->setIdea(index, idea);
}


std::string	Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}
