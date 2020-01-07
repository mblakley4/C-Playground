# Notes on C++

### Compiling

1. GCC compiler installed via homebrew on mac terminal `brew install gcc`

2. Create projectName.cpp file in project directory

3. Compile in CLI `make projectName` without the extension to compile OR install "gpp-compiler" from ATOM packages and use README.

4. The compile step will either generate errors or a binary object file -o which will we run in the next step.

5. Run `./projectName` in CLI to output program to CLI


### Basic program

- Starts with: `#include <iostream>` takes file 'iostream' and puts it in before compiling.

- Then `using namespace std;` (std: standard);  this isn't necessary, maybe not even best practice.  If not used, you must include std:: in front of cout, endl, etc.

- int creates function main with expected integer return; thus ending in return 0;
```
  int main() {
    cout << "Hello World" << endl;
    return 0;
  }
  ```
