#include <cstdio>

int main () {
  int n;
  float sum = 0;
  printf("Enter a value for n: ");
  scanf("%d", &n);
  while(n > 0) {
    sum += 1.0 / n;
    n--;
  }
  printf("Sum of the series: %.2f\n", sum);
  return 0;
}
