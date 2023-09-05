
#include <cstdint>
#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
  std::vector<int> vec = {1, 2, 3, 4};
  for (int i : vec.data()) {
    std::cout << i;
  }
  return 0;
}
