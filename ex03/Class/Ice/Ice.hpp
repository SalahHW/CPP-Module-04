/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:32:47 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/09 12:33:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <iostream>
#include "../AMateria/AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);
		virtual ~Ice();

		std::string const & getType() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
