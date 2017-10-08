#include <cstdio>
/*
 * This is a simple bruteforce prime generator
 */

int main() {
  for (int i = 1; i < 101; i++) {
    bool prime = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        prime = false;
        break;
      }
    }
    if (prime) printf("%d\n", i);
  }
  return 0;
}
