#include <stdio.h>
char spc[2048];

char* space (int x) {
  int i;
  for (i = 0; i < x; i++) {
    spc[i] = ' ';
  }
  return spc;
}

int main () {
  printf("%d%s%d\n", 1, space(10), 10);
  return 0;
}
