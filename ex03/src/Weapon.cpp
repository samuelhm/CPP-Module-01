/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:42:34 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 15:54:38 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "hands";
}

Weapon::Weapon(const string_t &type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}
const string_t& Weapon::getType()
{
	return (this->type);
}
void	Weapon::setType(const string_t &type)
{
	this->type = type;
}
