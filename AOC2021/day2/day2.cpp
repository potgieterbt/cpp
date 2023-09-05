#include <algorithm>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void p1();
void p2();

int main(int argc, char *argv[]) {
  // p1();
  p2();
  return 0;
}

void p1() {
  std::ifstream f("day2.txt");
  std::string t;
  int hori, depth, conv;
  hori = 0;
  depth = 0;
  conv = 0;
  while (std::getline(f, t)) {
    std::string dir, val;
    std::stringstream s(t);
    s >> dir;
    s >> val;
    conv = std::stoi(val);
    switch (dir[0]) {
    case 'f':
      hori += conv;
      break;
    case 'u':
      depth -= conv;
      break;
    case 'd':
      depth += conv;
      break;
    }
  }
  std::cout << hori * depth << "\n";
}

void p2() {
  std::ifstream f("day2.txt");
  int hori, depth, conv, aim;
  aim = 0;
  hori = 0;
  depth = 0;
  conv = 0;
  std::string t;
  while (std::getline(f, t)) {
    std::stringstream s(t);
    std::string dir, val;
    s >> dir;
    s >> val;
    conv = std::stoi(val);
    switch (dir[0]) {
    case 'f':
      hori += conv;
      depth += (aim*conv);
      break;
    case 'u':
      aim -= conv;
      break;
    case 'd':
      aim += conv;
      break;
    }
  }
  std::cout << (depth*hori) << "\n";
}
