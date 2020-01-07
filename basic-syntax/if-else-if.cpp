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

  if (input == 1) {
    std::cout << "Adding new record..." << '\n';
  } else if (input == 2) {
      std::cout << "Deleting record..." << '\n';
  } else if (input == 3) {
      std::cout << "Viewing..." << '\n';
  } else if (input == 4) {
      std::cout << "Searching..." << '\n';
  } else if (input == 5) {
      std::cout << "Quitting..." << '\n';
  } else {
      std::cout << "Invalid option" << '\n';
  }

  return 0;
}
