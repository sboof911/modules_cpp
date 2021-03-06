/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:51:08 by amaach            #+#    #+#             */
/*   Updated: 2022/03/09 13:20:44 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Zombie
#define _Zombie

#include <string>
#include <iostream>
#include <iomanip>

class   Zombie {
    
    public :
        Zombie( std::string name);
        Zombie( void );
        ~Zombie (void );
        
        std::string get_name( void );
        void        set_name( std::string name );
        void        announce(void);

    private :
    
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif