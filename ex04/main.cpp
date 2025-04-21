/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:20:24 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/12 17:05:56 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

typedef std::string string_t;

bool	replace(string_t &content, const string_t search, const string_t replace)
{
	size_t		pos = 0;
	string_t	new_content;

	while (pos < content.length())
	{
		size_t j = 0;
		while (j < search.length() && pos + j < content.length() && content[pos + j] == search[j])
			j++;
		if (j == search.length())
			break ;
		pos++;
	}
	if (pos == content.length())
		return (false);
	new_content.reserve(content.length() - search.length() + replace.length());
	for (size_t i = 0; i < pos; i++)
		new_content += content[i];
	new_content += replace;
	for (size_t i = pos + search.length(); i < content.length(); i++)
		new_content += content[i];
	content = new_content;
	return (true);
}

string_t fill(std::ifstream &file)
{
	string_t line;
	string_t result;
	while(std::getline(file, line))
		result += line + "\n";
	return (result);
}

int main(int argc, char *argv[])
{
	string_t content;
	string_t output;
	if (argc != 4)
	{
		std::cerr << "Introduce: 1- Archivo a modificar, 2-Texto a encontrar, 3- Texto a reemplazar." << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (!file || !file.good())
	{
		std::cerr << "Error de lectura de archivo." << std::endl;
		return (1);
	}
	content = fill(file);
	file.close();
	while (replace(content, argv[2], argv[3]))
		(void)argv[2];
	output = argv[1];
	output += ".replace";
	std::ofstream outputFile(output.c_str());
	if (!outputFile || !outputFile.good())
	{
		std::cerr << "Error de escritura de archivo!." << std::endl;
		return (1);
	}
	outputFile << content;
	outputFile.close();
	std::cout << "Ejecución Exitosa!" << std::endl;
	return (0);
}
