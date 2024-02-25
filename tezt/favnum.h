/*
Takeb from section 2 21
*/
#ifndef FAVNUM_H
#define FAVNUM_H

#include <iostream>

void favNum() {
  int fav_num;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "What is your favorite number? ";
  std::cin >> fav_num;
  std::cout << "Your favorite number is " << fav_num << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}

#endif // FAVNUM_H