/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:59:47 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 15:28:20 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *nightmare = zombieHorde(10, "Pepito");
	for (int i = 0; i < 10; i++)
		nightmare[i].announce();
	delete [] nightmare;
	return (0);
}
