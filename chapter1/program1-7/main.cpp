#include <cstdio>

int add (int a, int b) {
  return a + b;
}

int sub (int a, int b) {
  return a - b;
}

int main () {
  int x = 20;
  int y = 10;
  printf("20 + 10 = %d\n", add(x, y));
  printf("20 - 10 = %d\n", sub(x, y));
  return 0;
}


