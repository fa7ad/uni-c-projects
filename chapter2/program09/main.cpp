#include <cstdio>

typedef struct Point {
  float x;
  float y;
} Point;

int main () {
  Point c;
  printf("Enter the X coordinate for a point: ");
  scanf("%f", &c.x);
  printf("Enter the Y coordinate for a point: ");
  scanf("%f", &c.y);
  printf("This point (%.2f, %.2f) uses a typedef.\n", c.x, c.y);
  return 0;
}
