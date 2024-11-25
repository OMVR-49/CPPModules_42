/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:46:55 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/24 05:54:53 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// OCCF:
Form::Form() : name("name"), Signed(false), RequiredToSign(150) , RequiredToExecute(150)
{
	std::cout << "Form "<< name << " Default Constructor Called"<< std::endl;
}

Form::~Form()
{
	std::cout << "Form " << name << " Destructor Called"<< std::endl;
}

Form::Form(const Form& copy) : name(copy.name) , Signed(copy.Signed) , RequiredToSign(copy.RequiredToSign) , RequiredToExecute(copy.RequiredToExecute)
{
	std::cout << "Form " << name << " Copy Constructor Called"<< std::endl;
}

Form& Form::operator=(const Form& obj) {
	std::cout << "Form "<< name << " Copy assignment operator called" << std::endl;
	if (this != &obj) {
		this->Signed = obj.Signed;
	}
	return (*this);
}

// others:

Form::Form(const std::string& Name , const int RTS, const int RTE) : name(Name) , Signed(false) , RequiredToSign(RTS) , RequiredToExecute(RTE)
{
	std::cout << "Form " << getName() <<" parameterized Constructor called" << std::endl;
	if (RTS < 1 || RTE < 1)
		throw GradeTooHighException();
	if (RTS > 150 || RTE > 150)
		throw GradeTooLowException();
}

void  Form::beSigned(const Bureaucrat& bureaucrat)
{
	if(this->getRequiredToSign() >= bureaucrat.getGrade())
		this->Signed = true;
	else
		throw GradeTooLowException();
}

// getters:
const std::string& Form::getName() const
{
	return(this->name);
}

bool Form::getSigned() const
{
	return(Signed);	
}
int Form::getRequiredToSign() const
{
	return(RequiredToSign);	
}
int Form::getRequiredToExecute() const
{
	return(RequiredToExecute);
}

// Insertion Operator:
std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form Name: " << form.getName() << ", Form Required Grade To Sign: " << form.getRequiredToSign() << ", "
	<< "Form Required Grade To Execute: " << form.getRequiredToExecute() << ", Signed: " << form.getSigned();
    return os;
}

// Exceptions:
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}
const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High!";
}