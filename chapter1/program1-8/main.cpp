#include <cstdio>

int main () {
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  float x = a/(b - c);
  printf("%d/(%d - %d) = %f\n", a, b, c, x);
  return 0;
}
