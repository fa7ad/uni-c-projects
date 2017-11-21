#include <stdio.h>

int isPrime (int x) {
  int j;
  if (x < 2) return 0;
  int prime = 1;
  for (j = 2; j < x; j++) {
    if (x % j == 0) {
      prime = 0;
      break;
    }
  }
  return prime;
}


int main () {
  printf("Enter a number: ");
  int n;
  scanf("%d", &n);
  printf("The number %d is %s\n", n, isPrime(n) ? "Prime" : "Not Prime");
  return 0;
}
