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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "--- TEST FROM THE SUBJECT ---" << std::endl << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "--- TEST FOR THE ARRAY ---" << std::endl << std::endl;
	
	Animal* animal[5];
	for (size_t i = 0; i < 5; i++)
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}
	for (size_t i = 0; i < 5; i++)
	{
		delete(animal[i]);
		std::cout << std::endl;
	}

	std::cout << "--- TEST FOR THE DEEP COPY ---" << std::endl << std::endl;

	Cat* cat = new Cat();
	cat->getBrain()->setIdeas(0,"Got some new ideas!");
	Cat* copyCat = new Cat(*cat);
	std::cout << std::endl;
	std::cout << "Cat brain idea[0]     : " << cat->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CopyCat brain idea[0] : " << copyCat->getBrain()->getIdeas()[0] << std::endl;
	cat->getBrain()->setIdeas(0,"Hmmmm.... Gonna eat some fishes!");
	copyCat->getBrain()->setIdeas(0,"Hmmmm.... Wanna go outside and inside and outiside...");
	std::cout << "Cat brain idea[0]     : " << cat->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CopyCat brain idea[0] : " << copyCat->getBrain()->getIdeas()[0] << std::endl;
	std::cout << std::endl;
	delete(cat);
	delete(copyCat);
	std::cout << std::endl;

	Dog* dog = new Dog();
	dog->getBrain()->setIdeas(0,"Got no new ideas!");
	Dog* copyDog = new Dog(*dog);
	std::cout << std::endl;
	std::cout << "Dog brain idea[0]     : " << dog->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CopyDog brain idea[0] : " << copyDog->getBrain()->getIdeas()[0] << std::endl;
	dog->getBrain()->setIdeas(0,"Hmmmm.... Gonna eat some delicious trashes!");
	copyDog->getBrain()->setIdeas(0,"Hmmmm.... Wanna go outside and walk by your side!");
	std::cout << "Dog brain idea[0]     : " << dog->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CopyDog brain idea[0] : " << copyDog->getBrain()->getIdeas()[0] << std::endl;
	std::cout << std::endl;
	delete(dog);
	delete(copyDog);

	//Animal a = new Animal(); //a ne peut pas être instancié car Animal est maintenant une classe abstraite car il possède une méthode pure

	return (0);
}