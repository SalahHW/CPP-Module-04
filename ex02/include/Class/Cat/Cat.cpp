/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:24:36 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 17:52:03 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	*this = src;
	std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Cat assigned" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructed" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" <<std::endl;
}
