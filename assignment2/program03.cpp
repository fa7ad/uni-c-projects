#include <stdio.h>
#include <math.h>

long factorial (long x);
double series (double x, int n);

int main () {
  long x;
  double n;
  printf("Enter a value for x in f(x): ");
  scanf("%lf", &n);
  printf("How many terms? ");
  scanf("%li", &x);
  printf("f(%lf) = %lf\n", n, series(n, x));
  return 0;
}

double series (double x, int n) {
  double result = 0;
  int sign = 0;
  long i;
  for (i = 1; i < (2*n) + 1; i += 2) {
    double term = pow(x, i) / factorial(i);
    result += sign ? term : 0 - term;
    sign = !sign;
  }
  return result;
}

long factorial (long x) {
  if (x == 1 || x == 0) return 1;
  return x * factorial(x-1);
}