/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:07:49 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 10:13:54 by mgraefen         ###   ########.fr       */
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
  for (int i = 0; i < 4; ++i) {
    if (levels[i] == level) (this->*complain_ptr[i])();
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