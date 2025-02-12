/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:19:59 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 17:58:17 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Harl::*f_ptr[4])(void);
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};
#endif
