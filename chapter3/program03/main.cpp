#include <cstdio>
#include <cmath>

int main() {
  float num;
  printf("Enter a number (float): ");
  scanf("%f", &num);
  int integral = floor(num);
  int mhund = integral % 100;
  printf("Integral: %d\n", integral);
  printf("Last two integral digit: %02d\n", abs(mhund));
  return 0;
}
