/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:30 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 15:17:47 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

typedef std::string string_t;

class Zombie
{
	private:
		string_t name;
	public:
				Zombie();
				Zombie(const string_t &name);
				~Zombie();
		void	announce();
		void	set_name(const string_t &name);
};

Zombie* zombieHorde(int N, std::string name);
