/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:40:20 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 16:02:30 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

typedef std::string string_t;

class Weapon
{
	private:
		string_t type;
	public:
		Weapon();
		Weapon(const string_t &type);
		~Weapon();
		const string_t& getType();
		void			setType(const string_t &type);
};

#endif
