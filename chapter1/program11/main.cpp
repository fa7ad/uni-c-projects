#include <cstdio>
#include <cmath>

int main () {
  int ax, ay, bx, by;
  float d;
  printf("Enter X and Y coordinates for Point 1 (x<space>y): ");
  scanf("%d %d", &ax, &ay);
  printf("Enter X and Y coordinates for Point 2 (x<space>y): ");
  scanf("%d %d", &bx, &by);
  d = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
  printf("Distance between (%d, %d) and (%d, %d) is %.2f.\n", ax, ay, bx, by, d);
  return 0;
}
