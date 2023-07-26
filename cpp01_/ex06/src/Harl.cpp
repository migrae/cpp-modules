/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:20:27 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 10:58:53 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) { return; }

Harl::~Harl(void) { return; }

void Harl::complain(std::string level) {
  void (Harl::*complain_ptr[])(void) = {&Harl::debug, &Harl::info,
                                        &Harl::warning, &Harl::error};
  std::string levels[] = {"debug", "info", "warning", "error"};
  std::string levels_upper[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int lvl_num = 0;
  for (int i = 0; i < 4; ++i) {
    if (levels[i] == level || levels_upper[i] == level) lvl_num = i + 1;
  }
  switch (lvl_num) {
    case 1:
      (this->*complain_ptr[0])();
    case 2:
      (this->*complain_ptr[1])();
    case 3:
      (this->*complain_ptr[2])();
    case 4:
      (this->*complain_ptr[3])();
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
      break;
  }
}

void Harl::debug(void) {
  std::cout << "DEBUG!!! I love having extra bacon for my 7XL - double - "
               "cheese - triple - pickle -specialketchup burger.I really do !"
            << std::endl;
}

void Harl::info(void) {
  std::cout << "INFO!!! I cannot believe adding extra bacon costs more money. "
               "You didn’t put enough bacon in my burger! If you did, I "
               "wouldn’t be asking for more!"
            << std::endl;
}

void Harl::warning(void) {
  std::cout << "WARNING!!! I think I deserve to have some extra bacon for "
               "free. I’ve been coming for years whereas you started working "
               "here since last month."
            << std::endl;
}

void Harl::error(void) {
  std::cout
      << "ERROR!!! This is unacceptable! I want to speak to the manager now"
      << std::endl;
}