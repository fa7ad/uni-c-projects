#include <cstdio>

int main () {
  char c;
  int i;
  float f;
  double d;
  long l;
  printf("size of char: %ldB\n", sizeof(c));
  printf("size of int: %ldB\n", sizeof(i));
  printf("size of float: %ldB\n", sizeof(f));
  printf("size of double: %ldB\n", sizeof(d));
  printf("size of long: %ldB\n", sizeof(l));
  return 0;
}
