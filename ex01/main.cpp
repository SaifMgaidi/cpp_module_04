#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	int	arraySize = 4;

	Animal*	array[arraySize];

	std::cout << "-------------------creation animals array---------------------------\n";
	for (int i = 0; i < arraySize / 2; ++i)
		array[i] = new Cat();
	
	for (int i = arraySize / 2 ; i < arraySize; ++i)
		array[i] = new Dog();
	
	std::cout << "\n-------------------animals sounds---------------------------\n";
	for (int i = 0; i < arraySize; ++i)
		array[i]->makeSound();


	std::cout << "\n-------------------destruction animals---------------------------\n";	
	for (int i = 0; i < arraySize; ++i)
		delete array[i];

	std::cout << "\n-------------------case deep copy---------------------------\n";
	Dog	basicDog("test");

	{
		std::cout << "\nenter in the scope....\n";
		Dog	tmpDog = basicDog;
		std::cout << "quit in the scope....\n\n";
	}
	return (0);
}
