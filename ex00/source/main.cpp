/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:19:24 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 13:49:16 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Class/Animal/Animal.hpp"
#include "../include/Class/Cat/Cat.hpp"
#include "../include/Class/Dog/Dog.hpp"
#include "../include/Class/WrongAnimal/WrongAnimal.hpp"
#include "../include/Class/WrongCat/WrongCat.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal *cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	delete cat;

	return (0);
}
