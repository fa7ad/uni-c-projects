#include <cstdio>

int main() {
  int i = 5;
  while (i > 0) {
    --i;
    int x = i;
    int y = (2 * (5 - i)) - 1;
    while (x--) printf(" ");
    while (y--) printf("*");
    printf("\n");
  }
  return 0;
}
