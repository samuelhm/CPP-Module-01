/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:59:47 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 15:35:09 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef std::string string_t;

int	main()
{
	string_t brainz = "HI THIS IS BRAIN";
	string_t *stringPTR = &brainz;
	string_t &stringREF = brainz;

	std::cout << "Memory address of brainz: " << &brainz << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of brainz: " << brainz << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
