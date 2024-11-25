/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:46:41 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/12 23:48:47 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool Signed;
		const int RequiredToSign;
		const int RequiredToExecute;
	public:
	// OCCF:
		Form();
		Form(const Form&copy);
		Form& operator=(const Form& obj);
		~Form();
	// others:
		Form(const std::string& name , const int RTS, const int RTE);
		void beSigned(const Bureaucrat& bureaucrat);
	// getters:
	const std::string& getName() const;
	bool getSigned() const;
	int getRequiredToSign() const;
	int getRequiredToExecute() const;
	// Exceptions:
	class GradeTooHighException : public std::exception{
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
            const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif