#include <iostream>

int main() {

  //initialize multi-d-array of [x][y]
  std::string animals[2][3] = {
    {"fox", "dog", "cat"},
    {"mouse", "rat", "bird"}
  };

  //iterate through the row, [x]
  for(int i = 0; i < 2; i++) {
    //iterate through the columns, [y], of row position [i]
    for(int j = 0; j < 3; j++){
      //output array on same line with flush
      std::cout << animals[i][j] << " "<< std::flush;
    }
    //after writing a row, new line for next row
    std::cout << '\n';
  }


  return 0;
}
