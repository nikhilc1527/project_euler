#include <cstdint>
#include <vector>
#include <iostream>

int main(int argc, char *argv[]) {
  int max = 4e6;
  std::vector<int> fibs = { 1, 2 };

  std::uint64_t sum = 2;
  
  for (int i = 0; fibs[i + 1] <= max; i++) {
    fibs.push_back(fibs[i] + fibs[i + 1]);
    if (fibs[i + 2] % 2 == 0) sum += fibs[i + 2];
  }
  
  std::cout << sum << "\n";
  
  return 0;
}

// Answer: 4613732
