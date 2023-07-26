#ifndef CONTACT_H
#define CONTACT_H
#include "pb.hpp"

class Contact {
 public:
  Contact();
  Contact(std::string fn, std::string ln, std::string nn, std::string pn,
          std::string ds);
  ~Contact(void);
  void print_contact_preview(void);
  void print_contact_details(void);

 private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string secret;
};

#endif