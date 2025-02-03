/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:59:47 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/03 16:09:21 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *adolfo = newZombie("Adolfo");
	adolfo->announce();
	delete adolfo;
	randomChump("Perico");
	return (0);
}
