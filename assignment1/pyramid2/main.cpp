#include <cstdio>

int main() {
  for (int i = 0; i < 5; i++) {
    int x = 5 - i;
    int y = i;
    while (y--) printf(" ");
    while (x--) printf("*");
    printf("\n");
  }
  return 0;
}
