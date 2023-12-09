/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:30:29 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/09 12:32:11 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "../AMateria/AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		Cure(const Cure &src);
		Cure &operator=(const Cure &src);
		virtual ~Cure();

		std::string const & getType() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
