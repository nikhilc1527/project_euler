#include <iostream>

int main(int argc, char *argv[]) {
  int sum = 0;
  int max = 1000;
  for (int i = 1; i < max; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) sum += i;
  }

  std::cout << sum << "\n";

  return 0;
}

// Answer: 233168
