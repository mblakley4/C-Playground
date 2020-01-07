#include <iostream>

int main() {

  bool bValue = true;
  // false returns 0;
  // true returns 1;

  std::cout << bValue << '\n';

  char cValue = 55;
  std::cout << cValue << '\n';
  // outputs ASCII for 55 => 7

  wchar_t wValue = 'A';
  std::cout << wValue << '\n';
  // outputs ASCII position for A => 65

  return 0;
}
