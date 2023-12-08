/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:02:03 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 12:35:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
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
	std::cout << "Dog copied" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" <<std::endl;
}
