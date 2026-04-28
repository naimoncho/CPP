/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:47:06 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 15:00:19 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MAIN_HPP
#  define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>

typedef std::string string_t;

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void ); 
    public:
        void complain( std::string level );
};

# endif