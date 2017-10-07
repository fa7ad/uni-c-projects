#include <cstdio>

int main() {
  int x, y, z, temp;
  printf("X Y Z:\n");
  scanf("%d %d %d", &x, &y, &z);
  temp = x;
  x = y;
  y = z;
  z = temp;
  printf("X Y Z (now):\n");
  printf("%d %d %d\n", x, y, z);
  return 0;
}
