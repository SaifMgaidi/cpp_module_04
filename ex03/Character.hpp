#ifndef CHARACTER_HPP
# define CHARACTER_HPP


#include <iostream>
#include <string>
#include "ICharacter.hpp"


class Character: public ICharacter
{
public:
	// Constructors
	Character();
	Character(const Character& other);
	Character(const std::string& name);
	Character&	operator=(const Character& other);
	
	// Destructor
	~Character();

	// Member Functions
	std::string	const & getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
private:
	std::string			name_;
	AMateria*			inventory_[4];
};

#endif