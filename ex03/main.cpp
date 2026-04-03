#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	std::cout << "\n--- 42 SUJET TEST ---" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("test");
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "----------------------------------\n" << std::endl;
	

	std::cout << "\n--- TEST INVENTAIRE PLEIN ---" << std::endl;

	ICharacter*	cloud = new Character("cloud");

	cloud->equip(src->createMateria("ice"));
	cloud->equip(src->createMateria("cure"));
	cloud->equip(src->createMateria("ice"));
	cloud->equip(src->createMateria("cure"));

	AMateria*	MateriaEnTrop = src->createMateria("ice");

	cloud->equip(MateriaEnTrop);

	std::cout << "----------------------------------\n" << std::endl;



	std::cout << "\n--- TEST UNEQUIP ---" << std::endl;
	ICharacter* sephiroth = new Character("Sephiroth");
	AMateria* epee = src->createMateria("ice");
	sephiroth->equip(epee);

	sephiroth->use(0, *sephiroth);
	sephiroth->unequip(0);
	sephiroth->use(0, *sephiroth);
	std::cout << "----------------------------------\n" << std::endl;

	

	std::cout << "\n--- TEST DEEP COPY CHARACTER ---" << std::endl;
	Character original("Original");
	original.equip(src->createMateria("ice"));

	Character copie(original);
	copie.equip(src->createMateria("cure"));

	std::cout << "Original utilise :" << std::endl;
	original.use(0, copie);
	original.use(1, copie);

	std::cout << "Copie utilise :" << std::endl;
	copie.use(0, original);
	copie.use(1, original);
	std::cout << "----------------------------------\n" << std::endl;


	std::cout << "\n--- TEST LIMITES ET ERREURS ---" << std::endl;
	ICharacter* tifa = new Character("Tifa");


	AMateria* fake = src->createMateria("fire");
	if (fake == NULL)
		std::cout << "La création de 'fire' a bien échoué (renvoie NULL)." << std::endl;


	tifa->use(-1, *tifa);
	tifa->use(5, *tifa);
	tifa->use(0, *tifa);
	std::cout << "----------------------------------\n" << std::endl;



	delete tifa;
	delete epee;
	delete cloud;
	delete sephiroth;
	delete MateriaEnTrop;
	delete bob;
	delete me;
	delete src;
	return 0;
}
