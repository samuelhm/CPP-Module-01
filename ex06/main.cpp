/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:19:54 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 18:21:55 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Ussage: Harl {LEVEL}" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
