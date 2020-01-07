#include <iostream>

/*
    == equality test
    != not equals
    < less than
    > greater than
    <= less than or equal to
    >= greater than or equal to
    && and
    || or
*/

int main() {

  int val1 = 7;
  int val2 = 4;

  if (val1 < 8) {
    std::cout << "Condition 1: true" << '\n';
  } else {
    std::cout << "Condition 1: false" << '\n';
  }

  if (val1 == 7 && val2 == 3) {
    std::cout << "Condition 2: true" << '\n';
  } else {
    std::cout << "Condition 2: false" << '\n';
  }

  if (val1 > 3 || val2 > 4) {
    std::cout << "Condition 3: true" << '\n';
  } else {
    std::cout << "Condition 3: false" << '\n';
  }

  if (val1 != 8) {
    std::cout << "Condition 4: true" << '\n';
  } else {
    std::cout << "Condition 4: false" << '\n';
  }

  bool condition1 = val1 < 10;
  std::cout << "Condition 4: " << condition1 << '\n';

  return 0;
}
