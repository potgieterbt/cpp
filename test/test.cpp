#include <iostream>
int main(int argc, char *argv[]) {

  unsigned short first = 0xA2;
  unsigned short sec = 0xF0;
  unsigned int opcode = first << 8 | sec;
  std::cout << opcode;
  return 0;
}
