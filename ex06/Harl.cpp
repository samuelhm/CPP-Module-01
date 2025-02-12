/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:20:04 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 18:22:30 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	f_ptr[0] = &Harl::debug;
	f_ptr[1] = &Harl::info;
	f_ptr[2] = &Harl::warning;
	f_ptr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	switch (getEnumLevel(level))
	{
	case DEBUG:
		debug();
		info();
		warning();
		error();
		break;
	case INFO:
		info();
		warning();
		error();
		break;
	case WARNING:
		warning();
		error();
		break;
	case ERROR:
		error();
		break;
	default:
		std::cout << "Harl doesn't understand what you are saying." << std::endl;
		break;
	}
}

Level Harl::getEnumLevel(const std::string &level)
{
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return UNKNOWN;
}
