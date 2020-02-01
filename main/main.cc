#include "lib/get-time.h"
#include "main/get-main.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  get_localtime();

  std::string hey = "friends";
  std::cout << get_greet(hey) << std::endl;

  get_localtime();
  return 0;
}
