#include <cstdio>
#include <cmath>

int main () {
  int a, b, c;
  float s, ar;
  printf("Enter a b c: ");
  scanf("%d %d %d", &a, &b, &c);
  s = (a + b + c) / 2;
  ar = sqrt(s * (s-a) * (s-b) * (s-c));
  printf("Area: %.2f\n", ar);
  return 0;
}
