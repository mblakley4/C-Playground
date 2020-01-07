#include <iostream>

int main() {

  std::cout << "1.\tAdd new record." << '\n';
  std::cout << "2.\tDelete record." << '\n';
  std::cout << "3.\tView record." << '\n';
  std::cout << "4.\tSearch record." << '\n';
  std::cout << "5.\tQuit." << '\n';

  std::cout << "Enter your selection >" << '\n';

  int input;
  std::cin >> input;

  if (input < 3) {
    std::cout << "Admin access needed for these options. 😞" << '\n';
  } else {
    std::cout << "Access granted...executing...∞" << '\n';
  }

  if (input == 5) {
    std::cout << "Application quitting..." << '\n';
  } else {
    std::cout << "Not quitting." << '\n';
  }

  //see if-else-if.cpp for better coding practice


  return 0;
}
