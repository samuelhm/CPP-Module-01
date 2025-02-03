/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:30 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/03 15:55:21 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

typedef std::string string_t;

class Zombie
{
	private:
		string_t name;
	public:
				Zombie(const string_t &name);
				~Zombie();
		void	announce();
};

Zombie	*newZombie(const string_t &name);
void	randomChump(const string_t &name);
