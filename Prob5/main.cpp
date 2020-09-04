#include <cstdint>
#include <vector>
#include <iostream>
#include <limits>

using i64 = std::uint64_t;

int main(int argc, char *argv[]) {
  std::vector<i64> ints(1e9, 0);

  for (i64 i = 1; i <= 20; ++i) {
    for (i64 j = i; j < ints.size(); j += i) {
      ++ints[j];
    }
  }

  for (i64 i = 0; i < ints.size(); i++) {
    if (ints[i] == 20) {
      std::cout << i << "\n";
      break;
    }
  }
  
  return 0;
}

// Answer: 232792560
