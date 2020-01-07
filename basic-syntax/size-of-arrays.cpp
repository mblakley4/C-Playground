#include <iostream>

int main() {

  int values[] = {4, 7, 3, 4};

  std::cout << sizeof(values) << '\n';
  std::cout << sizeof(int) << '\n';

  for (size_t i = 0; i < (sizeof(values)/sizeof(int)); i++) {
    std::cout << values[i] << " " << std::flush;
  }

  std::cout << '\n';

  return 0;
}
