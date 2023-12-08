/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:06:27 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/08 13:33:27 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../Animal/Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		Cat &operator=(const Cat& src);
		virtual ~Cat();

		std::string getType() const;

		void makeSound() const;
};

#endif
