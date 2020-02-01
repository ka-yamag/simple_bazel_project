#include "lib/get-time.h"
#include <ctime>
#include <iostream>

void get_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}
