/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:33:13 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 18:16:06 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:43:12 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 15:32:56 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IceMateria.hpp"
#include "CureMateria.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << std::endl << "--- TEST FOR MATERIA & CHARACTER 1 ---" << std::endl << std::endl;

	Character*	a = new Character("John");
	Character*	b = new Character("Bill");
	AMateria*	c = new IceMateria();
	AMateria*	d = new CureMateria();
	
	a->equip(c);
	a->equip(d);

	a->use(0, *b);
	a->use(1, *b);

	a->unequip(0);
	a->use(0, *b);
	a->equip(c);
	a->use(0, *b);

	std::cout << std::endl << "--- TEST FOR MATERIA & CHARACTER 2 ---" << std::endl << std::endl;

	Character*	e = new Character(*a);
	Character*	f = new Character(*b);

	e->use(0, *f);
	e->use(1, *f);
	std::cout << std::endl;

	*e = *a;
	e->use(0, *f);
	e->use(1, *f);
	
	std::cout << std::endl << "--- TEST FOR MATERIA & CHARACTER & SOURCE 3 ---" << std::endl << std::endl;
	
	MateriaSource* g = new MateriaSource();

	g->learnMateria(c); //ice
	g->learnMateria(c);
	g->learnMateria(c);
	g->learnMateria(d); //cure

	e->equip(g->createMateria("cure"));
	e->use(2, *f);

	e->equip(g->createMateria(""));
	e->use(3, *f);

	std::cout << std::endl << "--- TEST FROM THE SUBJECT ---" << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new IceMateria());
	src->learnMateria(new CureMateria());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	
	delete(a);
	delete(b);
	delete(e);
	delete(f);
	delete(g);
	return (0);
}