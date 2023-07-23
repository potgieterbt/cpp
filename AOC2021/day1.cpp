#include <fstream>
#include <iostream>
#include <string>

void p1();
void p2();

int main(int argc, char *argv[]) {
  p1();
  p2();
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
  std::ifstream f("day1.txt", std::ios_base::in);
  int a1, b2, b3, c4, t1, t2, inc = 0;
  // init first 3 items
  for (int i = 0; i < 3; ++i) {

  }
  // loop through file get item 4, calc total 1 and 2 compare move each item down one
  while () {

  }
  std::cout << inc << "\n";
}
