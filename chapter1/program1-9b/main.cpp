#include <cstdio>

int main () {
  int faren;
  float cel;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%d", &faren);
  cel = (faren - 32) * 5.0 / 9.0;
  printf("%d F in Celsius is: %.2f C\n", faren, cel);
  return 0;
}
