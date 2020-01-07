#include <iostream>

int main() {

  std::string animals[2][3] = {
    {"fox", "dog", "cat"},
    {"mouse", "rat", "bird"}
  };

  std::cout << sizeof(animals[0]) << '\n';
  std::cout << sizeof(animals) << '\n';
  std::cout << sizeof(std::string) << '\n';

  for(unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
    for(unsigned int j = 0; j < sizeof(animals[0])/sizeof(std::string) ; j++) {
      std::cout << animals[i][j] << " " << std::flush;
    }
    std::cout << '\n';
  }


  return 0;
}
