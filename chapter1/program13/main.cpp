#include <cstdio>
#include <cmath>

#define PI 3.1415

int main () {
  int ax, ay, bx, by;
  float d, rad;
  ax = 2;
  ay = 2;
  bx = 5;
  by = 6;
  printf("Line joins the points: (%d, %d) and (%d, %d)\n", ax, ay, bx, by);
  d = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
  rad = d / 2;
  printf("Area of the circle: %f", PI * rad * rad);
  return 0;
}
