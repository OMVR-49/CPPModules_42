/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:49:26 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/15 04:49:59 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
    std::string target;
	public:
	// OCCF:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy); 
		RobotomyRequestForm&operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();
	// others:
		RobotomyRequestForm(const std::string & target);
	// overide:
		void execute(Bureaucrat const &executor) const ;
};

#endif