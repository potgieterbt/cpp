#include <fstream>
#include <iostream>
#include <string>

void p1();

int main(int argc, char *argv[]) {
  p1();
  return 0; }

void p1() {
  std::ifstream f("day1.txt", std::ios_base::in);
  std::string t;
  int prev, cur, inc = 0;
  while (std::getline(f, t)) {
    prev = cur;
    cur = std::stoi(t);
    if (cur > prev) {
      ++inc;
    }
  }
  std::cout << inc << "\n";
}

void p2(){
}
