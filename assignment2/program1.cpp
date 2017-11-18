#include <stdio.h>
/*
 * this is my attempt WITHOUT pointers
 */
int a = 0, b = 1;
void swap () {
  int temp = a;
  a = b;
  b = temp;
}

int main () {
  printf("A: %d, B: %d\n", a, b);
  swap();
  printf("After swap()\n");
  printf("A: %d, B: %d\n", a, b);
  return 0;
}
