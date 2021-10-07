/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:43:12 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:43:08 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "--- TEST FROM THE SUBJECT ---" << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	std::cout << std::endl;
	delete(meta);
	delete(j);
	delete(i);
	std::cout << std::endl << std::endl;

	std::cout << "--- TEST FOR THE WRONG ANIMAL/CAT ---" << std::endl << std::endl;

	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the wrong sound!
	test->makeSound();
	std::cout << std::endl;
	delete(test);
	delete(k);
	return (0);
}