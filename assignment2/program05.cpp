#include <stdio.h>

int fib (int x);

int main () {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  int i;
  for (i = 1; i < n; i++) {
    printf("%d, ", fib(i));
  }
  printf("%d\n", fib(n));
  return 0;
}

int fib (int x) {
  if (x <= 2) return 1;
  return fib(x-1) + fib(x-2);
}