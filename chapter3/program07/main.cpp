#include <cstdio>
#include <cmath>

int main () {
  int nmin, nmax;
  float nreal;
  printf("Enter a real number: ");
  scanf("%f", &nreal);
  nmin = floor(nreal);
  nmax = ceil(nreal);
  printf("Smallest integer not less than the number ");
  printf("\t The given number ");
  printf("\t Largest integer not more than the number\n");
  printf("%d \t\t\t\t\t\t %.2f \t\t\t\t\t %d\n", nmin, nreal, nmax);
  return 0;
}
