/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:19:24 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/09 01:55:18 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Class/Animal/Animal.hpp"
#include "../include/Class/Cat/Cat.hpp"
#include "../include/Class/Dog/Dog.hpp"
#include "../include/Class/WrongAnimal/WrongAnimal.hpp"
#include "../include/Class/WrongCat/WrongCat.hpp"

int	main(void)
{
	int n = 10;

	// Create n animals
	Animal *animals[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal " << i << " : " << std::endl;
		if (!(i % 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	// Delete n animals
	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal " << i << " : " << std::endl;
		delete animals[i];
	}

	// Can't do that anymore
	// Animal *animal = new Animal();
	// animal->makeSound();
	// delete animal;

	return (0);
}
