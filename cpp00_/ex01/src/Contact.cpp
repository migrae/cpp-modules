#include "pb.hpp"

Contact::Contact(void) { return; }
Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn,
                 std::string ds)
    : first_name(fn),
      last_name(ln),
      nickname(nn),
      phone_number(pn),
      secret(ds) {
  return;
}

Contact::~Contact(void) { return; }

std::string trunc_string(std::string str)
{
	if(str.length() <= 10)
		return(str);
	else
		return(str.substr(0,9).append("."));
}

void Contact::print_contact_preview(void) {
  std::cout << std::setw(10) << std::right << trunc_string(first_name) << "|"
						<< std::setw(10) << std::right << trunc_string(last_name) << "|"
						<< std::setw(10) << std::right << trunc_string(nickname) << "|"
						<< std::endl;
}

void Contact::print_contact_details(void) {
  std::cout << std::setw(16) << std::left << "FIRST NAME    : " << first_name << std::endl
            << std::setw(16) << "LAST NAME     : " <<last_name << std::endl
            << std::setw(16) << "NICKNAME      : " <<nickname << std::endl
            << std::setw(16) << "PHONENUMBER   : " <<phone_number << std::endl
            << std::setw(16) << "DARKEST SECRET: " <<secret << std::endl;
  print_divider(' ', 42);
}