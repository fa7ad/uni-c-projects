#include <stdio.h>

char format[] = "%.01f\n";

char* roundFormat (int x) {
  int y = x % 10;
  int z = (x - y) / 10;
  format[2] = '0' + z;
  format[3] = '0' + y;
  return format;
}

int main () {
  float num;
  int n;
  printf("Enter a number: ");
  scanf("%f", &num);
  printf("Enter decimal places to round to (max 10): ");
  scanf("%d", &n);
  printf(roundFormat(n), num);
  return 0;
}
