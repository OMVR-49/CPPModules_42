/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:47:05 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 12:45:33 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string name;
		int	 grade;
	public:
	// OCCF:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();
	// Others:
		Bureaucrat(const std::string& nm, int gr);
		void signForm(AForm &form);
		void executeForm(AForm const & form) const;
	// Getters:
		std::string const& getName() const;
		int getGrade() const;
	// dec/inc methodes:
		void increment(int amount);
		void decrement(int amount);
	// Exceptions:
	class GradeTooHighException : public std::exception{
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
            const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif