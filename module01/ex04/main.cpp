/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:51:19 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 21:16:45 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string s1 = argv[argc - 2];
	std::string s2 = argv[argc - 1];
	std::string filename = argv[argc - 3];

	if (argc != 4)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}

	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: empty string" << std::endl;
		return (1);
	}

	/**
	** ouverture du fichier
	** verification du bon fonctionnement de l'ouverture
	** copie du contenu du fichier dans un buffer stringstream
	** copie de la string contenue dans ce buffer dans une string
	** fermeture du fichier
	**/

	std::ifstream	ifs(filename,  std::ifstream::in);
	if (ifs.fail())
	{
		std::cout << "Error: failed to open file" << std::endl;
		return (1);
	}
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	std::string output = buffer.str();
	ifs.close();

	/**
	** recherche d'une occurence de s1 dans le contenu du fichier
	** si aucune occurence, find renvoie std::string::npos, plus grande valeur possible pour un size_t
	** si une occurence est trouvée, on efface cette occurence de l'output
	** on insert la nouvelle string dans l'output
	** on insert l'output dans le fichier output
	**/

	size_t	pos = output.find(s1);
	while (pos != std::string::npos)
	{
		output.erase(pos, s1.size());
		output.insert(pos, s2);
		pos = output.find(s1);
	}
	std::ofstream	ofs(filename + ".replace");
	if (ofs.fail())
	{
		std::cout << "Error: failed to create output file" << std::endl;
		return (1);
	}
	ofs << output;
	ofs.close();
	return (0);
}