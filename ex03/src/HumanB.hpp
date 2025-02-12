/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:56:45 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 16:11:29 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		string_t name;
		Weapon *weapon;
	public:
		HumanB(const string_t &name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
