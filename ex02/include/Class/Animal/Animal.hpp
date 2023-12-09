/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:01:26 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/09 01:56:44 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();

		const std::string& getType() const;
		
		virtual void makeSound() const = 0;
};

#endif
