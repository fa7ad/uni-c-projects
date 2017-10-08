#include <cstdio>

int main() {
  for (int i = 1; i < 6; i++) {
    int x = i;
    while (x--) printf("*");
    printf("\n");
  }
  return 0;
}
