#include <cstdio>

int main () {
  int x, y, z;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &x, &y, &z);
  printf("Sum: %d\n", x + y + z);
  printf("Average: %.2f\n", (x + y + z) / 3.0);
  printf("Largest: %d\n", x > y ? (x > z ? x : z) : (y > z ? y : z));
  printf("Smallest: %d\n", x < y ? (x < z ? x : z) : (y < z ? y : z));
  return 0;
}
