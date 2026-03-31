#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
public:
	// Constructors
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal(const std::string& typeName);
	WrongAnimal&	operator=(const WrongAnimal& other);

	// Destructors
	virtual ~WrongAnimal();

	// Member Functions
	std::string		getType() const;
	void			makeSound() const;

protected:
	std::string	type;
};


#endif