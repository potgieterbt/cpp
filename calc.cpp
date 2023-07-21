#include <iostream>

int main (int argc, char *argv[]) {
  int first;
  int second;
  char op;
  int res;
  std::cout << "Input the first number: ";
  std::cin >> first;
  std::cout << "Input the second number: ";
  std::cin >> second;
  std::cout << "Input the operator: ";
  std::cin >> op;

  switch (op) {
    case '+' : res = first + second; break;
    case '-' : res = first - second; break;
    case '*' : res = first * second; break;
    case '/' : res = first / second; break;
  }
  std::cout << first  << op << second << "=" << res << "\n";
  return 0;
}
