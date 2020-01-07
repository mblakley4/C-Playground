#include <iostream>

int main() {

  const std::string password = "hello";

  std::string input;

  do {
    std::cout << "Enter your password > " << '\n';

    std::cin >> input;

    if (input != password) {
      std::cout << "Access denied" << '\n';
    }
  } while (input != password);


  std::cout << "Password accepted" << '\n';

  return 0;
}
