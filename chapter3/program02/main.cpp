#include <cstdio>
#include <cmath>

int main() {
  float num;
  printf("Enter a number (float): ");
  scanf("%f", &num);
  int integral = floor(num);
  int tenmod = integral % 10;
  printf("Last integral digit: %d\n", abs(tenmod));
  return 0;
}
