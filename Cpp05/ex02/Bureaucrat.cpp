/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:29:25 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 18:17:03 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// OCCF:
Bureaucrat::Bureaucrat() :name("slave"), grade(150)
{
	std::cout << "Bureaucrat " << getName() <<" Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->grade = rhs.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << getName() << " Destructor called" << std::endl;
}
// others:
Bureaucrat::Bureaucrat(const std::string& nm, int gr) : name(nm) , grade(gr)
{
    std::cout << "Bureaucrat parameterized " << getName() <<" Constructor called" << std::endl;
    if (gr < 1)
		throw GradeTooHighException();
	if (gr > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
	}
}
void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() 
                  << " because: " << e.what() << std::endl;
    }
}
// Getters:
const std::string& Bureaucrat::getName() const
{
	return(this->name);
}
 
int Bureaucrat::getGrade() const
{
	return(this->grade);
}

// dec/inc methodes:
void Bureaucrat::decrement(int amount)
{
	if (grade + amount > 150)
		throw(GradeTooLowException());
	grade += amount;
}

void Bureaucrat::increment(int amount)
{
	if (grade - amount < 1)
		throw(GradeTooHighException());
	grade -= amount;
}
// Insertion Operator:
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}
// Exceptions:
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High!";
}