#include <cstdio>

int main () {
  int x, y, z;
  printf("Enter 3 integers: ");
  scanf("%d %d %d", &x, &y, &z);
  printf("Largest number is: %d\n", x > y ? (x > z ? x : z) : (y > z ? y : z));
  return 0;
}
