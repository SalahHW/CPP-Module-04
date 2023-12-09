/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:55:36 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/09 19:51:44 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "../AMateria/AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria(src){
	*this = src;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Ice *Ice::clone() const {
	return (new Ice(*this));
}
