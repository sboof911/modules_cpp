/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:09:48 by amaach            #+#    #+#             */
/*   Updated: 2022/03/22 13:03:29 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_
#define _ROBOTOMYREQUESTFORM_

#include <iostream>
#include "Form.hpp"

class   RobotomyRequestForm : public Form
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( RobotomyRequestForm const & src);
        ~RobotomyRequestForm( void );
        void    operator=(RobotomyRequestForm const & src);
        std::string     getTarget( void ) const;
        void	        execute( const BureauCrat &executor ) const;
    
};

std::ostream&    operator<<(std::ostream &o, RobotomyRequestForm const & src);

#endif