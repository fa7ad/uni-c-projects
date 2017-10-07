#include <cstdio>

int main () {
  int x, y;
  int sum, diff, prod;
  float divi;
  printf("Enter X: ");
  scanf("%d", &x);
  printf("Enter Y: ");
  scanf("%d", &y);

  sum = x + y;
  diff = x - y;
  prod = x * y;
  divi = float(x) / y;

  printf("x = %d \t \t \t y = %d\n", x, y);
  printf("Sum = %d \t \t Difference = %d\n", sum, diff);
  printf("Product = %d \t \t Division = %.2f\n", prod, divi);
  return 0;
}
