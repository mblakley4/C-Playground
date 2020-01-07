#include <iostream>
#include <iomanip>
// i/o manipulation

int main() {

  float fValue = 76.4;

  std::cout << std::fixed << fValue << '\n';
  std::cout << std::scientific << fValue << '\n';
  std::cout << std::setprecision(20) << std::fixed << fValue << '\n';

  double dValue = 76.4;
  std::cout << std::setprecision(20) << std::fixed << dValue << '\n';

  long double lValue = 76.4;

  std::cout << "Size of float: " << sizeof(fValue)<< '\n';
  std::cout << "Size of double: " << sizeof(dValue)<< '\n';
  std::cout << "Size of long double: " << sizeof(lValue)<< '\n';

  return 0;
}
