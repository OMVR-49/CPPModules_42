/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:57:25 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/24 05:53:09 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// OCCF:
AForm::AForm() : name("name"), Signed(false), RequiredToSign(150) , RequiredToExecute(150)
{
	std::cout << "AForm "<< name << " Default Constructor Called"<< std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm " << name << " Destructor Called"<< std::endl;
}

AForm::AForm(const AForm& copy) : name(copy.name) , Signed(copy.Signed) , RequiredToSign(copy.RequiredToSign) , RequiredToExecute(copy.RequiredToExecute)
{
	std::cout << "AForm " << name << " Copy Constructor Called"<< std::endl;
}

AForm& AForm::operator=(const AForm& obj) {
	std::cout << "AForm "<< name << " Copy assignment operator called" << std::endl;
	if (this != &obj) {
		this->Signed = obj.Signed;
	}
	return (*this);
}

// others:

AForm::AForm(const std::string& Name , const int RTS, const int RTE) : name(Name) , Signed(false) , RequiredToSign(RTS) , RequiredToExecute(RTE)
{
	std::cout << "AForm " << getName() <<" parameterized Constructor called" << std::endl;
	if (RTS < 1 || RTE < 1)
		throw GradeTooHighException();
	if (RTS > 150 || RTE > 150)
		throw GradeTooLowException();
}

void  AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if(this->getRequiredToSign() >= bureaucrat.getGrade())
		this->Signed = true;
	else
		throw GradeTooLowException();
}

// getters:
const std::string& AForm::getName() const
{
	return(this->name);
}

bool AForm::getSigned() const
{
	return(Signed);	
}
int AForm::getRequiredToSign() const
{
	return(RequiredToSign);	
}
int AForm::getRequiredToExecute() const
{
	return(RequiredToExecute);
}

// Insertion Operator:
std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "AForm Name: " << AForm.getName() << ", AForm Required Grade To Sign: " << AForm.getRequiredToSign() << ", "
	<< "AForm Required Grade To Execute: " << AForm.getRequiredToExecute() << ", Signed: " << AForm.getSigned();
    return os;
}

// Exceptions:
const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High!";
}
const char* AForm::UnsignedFormException::what() const throw()
{
	return "Unsigned Form !";
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (AForm::UnsignedFormException());
	if (executor.getGrade() > this->getRequiredToExecute())
		throw (AForm::GradeTooLowException());
}