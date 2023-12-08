/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:24:36 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 12:35:14 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
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
	std::cout << "Cat copied" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" <<std::endl;
}
