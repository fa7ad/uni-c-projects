#include <cstdio>

int main () {
  int m, n;
  printf("Enter two numbers: ");
  scanf("%d %d", &m, &n);
  printf("%d is %s multiple of %d\n", m, m % n != 0 ? "NOT a" : "a", n);
  return 0;
}
