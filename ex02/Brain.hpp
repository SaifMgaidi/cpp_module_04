#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	// Constructors
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	
	// Destructor
	~Brain();
	
	// Member Functions
	void		setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
private:
	std::string	ideas[100];
};


#endif