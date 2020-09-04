#include <cstdint>
#include <iostream>
#include <algorithm>
#include <numeric>

using i64 = std::uint64_t;

bool palindrome(i64 i) {
  i64 copy = i, rev = 0;
  while (copy > 0) {
    rev = rev * 10 + copy % 10;
    copy /= 10;
  }
  return rev == i;
}

int main(int argc, char *argv[]) {
  i64 max = 0, maxi = 0, maxj = 0;

  for (i64 i = 999; i > 0; --i) {
    for (i64 j = 999; j > 0; --j) {
      i64 prod = i * j;
      if (prod < max) break;
      if (palindrome(prod)) {
        max = std::max(max, prod);
      }
    }
  }

  std::cout << max << "\n";
    
  return 0;
}

// Answer: 906609
