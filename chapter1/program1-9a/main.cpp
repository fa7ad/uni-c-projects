#include <cstdio>

int main () {
  int cel;
  float faren;
  printf("Enter temperature in Celsius: ");
  scanf("%d", &cel);
  faren = (cel * 9.0 / 5.0) + 32;
  printf("%d C in Fahrenheit is: %.2f F\n", cel, faren);
  return 0;
}
