#include "Character.hpp"

//----------------------------Constructors------------------------------------------
Character::Character()
:	name_("")
{
	for (int i = 0; i < 4; ++i)
		inventory_[i] = NULL;
	std::cout << "Character: default constructor called for \'" << name_ << "\'\n";
}


Character::Character(const Character& other)
:	name_(other.name_)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory_[i])
			inventory_[i] = other.inventory_[i]->clone();
		else
			inventory_[i] = NULL;
	}
	std::cout << "Character: copy constructor called for \'" << name_ << "\'\n";
}


Character::Character(const std::string& name)
:	name_(name)
{
	for (int i = 0; i < 4; ++i)
		inventory_[i] = NULL;
	std::cout << "Character: parameters constructor called for \'" << name_ << "\'\n";
}


Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name_ = other.name_;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory_[i];
			if (other.inventory_[i])
				inventory_[i] = other.inventory_[i]->clone();
			else
				inventory_[i] = NULL;
		}
	}
	std::cout << "Character: copy assignment operator called for \'" << name_ << "\'\n";
	return (*this);
}


//----------------------------Detructor------------------------------------------
Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete inventory_[i];
	std::cout << "Character: destructor called for \'" << name_ << "\'\n";
}


//----------------------------Member Functions------------------------------------------
std::string	const & Character::getName() const
{
	return (name_);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (inventory_[i] == NULL)
			inventory_[i] = m;
	}
}


void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !inventory_[idx])
		return ;
	inventory_[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inventory_[idx])
		return ;
	inventory_[idx]->use(target);
}
