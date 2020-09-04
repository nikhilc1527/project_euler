#include <vector>
#include <cstdint>
#include <iostream>
#include <cmath>

using prim = std::uint64_t;

bool prime(prim i) {
  for (int j = 2; j <= std::sqrt(i); j++) {
    if (i % j == 0) return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  
  prim goal = 600851475143;

  for (prim j = 2; j <= goal; ++j) {
    prim i = goal / j;
    if (goal % i != 0) continue;
    if (prime(i)) {
      std::cout << i << "\n";
      break;
    }
  }
  
  return 0;
}

// Answer: 6857
