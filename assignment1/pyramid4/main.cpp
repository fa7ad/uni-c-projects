#include <cstdio>

int main() {
  for (int i = 5; i > 0; i--) {
    int x = i;
    while (x--) printf("*");
    printf("\n");
  }
  return 0;
}
