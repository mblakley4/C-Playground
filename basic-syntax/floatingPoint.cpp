#include <iostream>
#include <iomanip>
// i/o manipulation

int main() {

  float fValue = 76.4;

  std::cout << std::fixed << fValue << '\n';
  std::cout << std::scientific << fValue << '\n';

  return 0;
}
