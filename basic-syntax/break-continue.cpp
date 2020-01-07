#include <iostream>

int main() {

  // for (int i = 0; i < 5; i++) {
  //   std::cout << "i is: " << i << '\n';
  //
  //   if(i == 3){
  //     break;
  //   }
  // }

  for (int i = 0; i < 5; i++) {
    std::cout << "i is: " << i << '\n';

    if(i == 3){
      continue;
    }
    //this line is not executed on i = 3
    std::cout << "Looping..." << '\n';
  }

  std::cout << "Program Quitting...\n";

  return 0;
}
