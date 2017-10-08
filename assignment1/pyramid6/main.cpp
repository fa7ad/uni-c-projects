#include <cstdio>
#include <cmath>

int main() {
  for (int i = 5; i > -5; i--) {
    int x = abs(i);
    int y = 2 * (5 - x) - 1;
    while (x--) printf(" ");
    while (y > 0) {
      y--;
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
