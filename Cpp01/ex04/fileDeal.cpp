/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileDeal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:31 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 00:10:42 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileDeal.hpp"

fileDeal::fileDeal(const std::string& fileName, const std::string& s1,
				   const std::string& s2) : fileName(fileName), s1(s1), s2(s2){}

int fileDeal::replaceAndSave()
{
	std::ifstream inputFile(fileName);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Unable to open input file '" << fileName << std::endl;
		return 1;
	}
	std::ofstream outputFile(fileName + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Unable to create or open output file '" << fileName + ".replace " << std::endl;
		inputFile.close();
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line)) 
	{
		size_t pos = 0;
		while ((pos = findAndReplace(line, pos)) != std::string::npos) 
			pos += s2.length();
		if (!inputFile.eof())
			outputFile << line << std::endl;
		else
			outputFile << line;
	}
	inputFile.close();
	outputFile.close();
	std::cout << "Replacement completed. Output saved to '" << fileName + ".replace" << std::endl;
	return 0;
}

size_t fileDeal::findAndReplace(std::string& line, size_t pos)
{
	pos = line.find(s1, pos);
	if (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	return pos;
}

fileDeal::~fileDeal(){}
