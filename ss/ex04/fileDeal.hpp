/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileDeal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:40:01 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/24 16:07:55 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEDEAL_HPP
#define FILEDEAL_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class fileDeal
{
	private:
		std::string fileName;
		std::string s1;
		std::string s2;
		size_t findAndReplace(std::string & line, size_t pos);
	public:
		fileDeal(const std::string& fileName, const std::string& s1, const std::string& s2);
		int replaceAndSave();
		~fileDeal();
};

#endif