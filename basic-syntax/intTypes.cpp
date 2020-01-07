#include <iostream>
#include <limits>

int main() {

  int value = 54656;

  // INT_MAX available from <limits>

  std::cout << value << '\n';
  std::cout << "Max int value: "<< INT_MAX << '\n';
  std::cout << "Min int value: "<< INT_MIN << '\n';

  // use `long int` for values larger than INT_MAX
  // use 'short int' for values smaller than INT_MIN

  std::cout << "Size of int: " << sizeof(int) << " bytes" << '\n';

  // only positive values; allows bigger number b/c there's not a bit used for the sign
  unsigned int uValue = 2342343

  return 0;
}
