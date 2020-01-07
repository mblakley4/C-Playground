#include <iostream>

int main() {

  std::string password = "hello";
  std::cout << "Enter your password > " << '\n';

  std::string input;
  std::cin >> input;

  if (input == password) {
    std::cout << "Password Accepted" << '\n';
  }

  if (input != password) {
    std::cout << "Invalid Password" << '\n';
  }

  //std::cout << "'" << input << "'" << '\n';

  return 0;
}
