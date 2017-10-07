#include <cstdio>

int main () {
  int x = 132456;
  int y = 654321;
  short int z = x + y;
  printf("%d\n", z);
  /*
   * The output is rubbish as the value overflows
   */
  return 0;
}
