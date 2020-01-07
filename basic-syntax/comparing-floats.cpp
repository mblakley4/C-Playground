#include <iostream>
#include <iomanip>

int main() {

  float value1 = 1.1;

  if (value1 == 1.1) {
    std::cout << "equals" << '\n';
  }
  else {
    std::cout << "not equal" << '\n';
  }
  // cannot match up the floating value using ==
  std::cout << std::setprecision(10) << value1 << '\n';

  return 0;
}
