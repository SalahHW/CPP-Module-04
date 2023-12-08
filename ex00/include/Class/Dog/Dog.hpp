/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:10:19 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 13:33:34 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../Animal/Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog &operator=(const Dog& src);
		virtual ~Dog();

		std::string getType() const;

		void makeSound() const;
};

#endif
