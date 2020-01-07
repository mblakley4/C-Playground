#include <iostream>

int main() {

  // NOTE:
  // C++ will let you access unassigned array positions.
  // If you don't initialize array values, you will access
  // whatever was previously stored in memory.

  std::cout << " " << '\n';
  std::cout << "Array of integers" << '\n';
  std::cout << "=================" << '\n';

  int array[3];

  array[0] = 88;
  array[1] = 44;
  array[2] = 23;

  for(int i = 0; i < 3; i++) {
    std::cout << array[i] << '\n';
  }

  std::cout << " " << '\n';
  std::cout << "Array of doubles" << '\n';
  std::cout << "=================" << '\n';

  double numbers[4] = {4.5, 2.3, 7.2, 8.1};

  for(int i = 0; i < 4; i++) {
    std::cout << numbers[i] << '\n';
  }

  std::cout << " " << '\n';
  std::cout << "Initialize with 0 values" << '\n';
  std::cout << "=================" << '\n';

  int numberArray[8] = {};

  for(int i = 0; i < 8; i++) {
    std::cout << "index " << i << ": " << numberArray[i] << '\n';
  }
  std::cout << " " << '\n';
  std::cout << "Arrays with strings" << '\n';
  std::cout << "=================" << '\n';
  std::string texts[] = {"matt", "mark", "mike"};

  for (size_t i = 0; i < 3; i++) {
    std::cout << texts[i] << '\n';
  }

  return 0;
}
