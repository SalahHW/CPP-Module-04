/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:55:36 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 12:47:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	this->type = src.type;
	std::cout << "Animal copied" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

const std::string& Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" <<std::endl;
}
