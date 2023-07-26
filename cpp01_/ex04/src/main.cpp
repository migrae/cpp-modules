/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:39:14 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 17:48:23 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool check_input(int argc) {
  if (argc < 4) {
    std::cerr << "Too few arguments!" << std::endl;
    return (false);
  }
  if (argc > 4) {
    std::cerr << "Too many arguments" << std::endl;
    return (false);
  }
  return (true);
}

bool	check_file_and_strings(std::string line, std::string search)
{
	bool flag = true;
	
	if(line.empty() == true)
	{
		std::cerr << "file has no content" << std::endl;
		flag = false;
	}
	if(search.empty() == true)
	{
		std::cerr << "search string is empty" << std::endl;
		flag = false;
	}
	return(flag);
}

bool copy_replace(char **argv, std::ofstream &ofs, std::ifstream &ifs) {
  std::string line;
  std::string search = argv[2];
  std::string replace = argv[3];
  size_t i = 0;

  std::getline(ifs, line, '\x1A');
	if(check_file_and_strings(line, search) == false)
	{
		ifs.close();
		return(false);
	}
  while ((i = line.find(search, i)) != std::string::npos) {
    line.erase(i, search.length());
    line.insert(i, replace);
    i += replace.length();
  }
  ofs << line;
  ifs.close();
	return (true);
}

int main(int argc, char **argv) {
  if (check_input(argc) == false) return (EXIT_FAILURE);
  std::string filename = argv[1];
  std::ifstream ifs(filename);
  if (!ifs) {
    std::cerr << "Could not open " << filename << std::endl;
    return (EXIT_FAILURE);
  }
  std::ofstream ofs(filename + ".replace");
  if (!ofs) {
    std::cerr << "Could not create the file " << (filename + ".replace")
              << std::endl;
    return (EXIT_FAILURE);
  }
  if(copy_replace(argv, ofs, ifs) == false)
		return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}