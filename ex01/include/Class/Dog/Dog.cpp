/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:02:03 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 17:33:20 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	*this = src;
	std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Dog assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructed" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" <<std::endl;
}
