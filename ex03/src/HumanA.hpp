/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:47:27 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 16:10:20 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		string_t name;
		Weapon *weapon;
	public:
		HumanA(const string_t &name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif
