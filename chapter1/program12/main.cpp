#include <cstdio>
#include <cmath>

#define PI 3.1415

int main () {
  int cx, cy, ox, oy;
  float rad;
  ox = 0;
  oy = 0;
  cx = 4;
  cy = 5;
  printf("Center of circle: (%d, %d)\n", ox, oy);
  printf("Point on Circumference: (%d, %d)\n", cx, cy);
  rad = sqrt(pow(cx - ox, 2) + pow(cy - oy, 2));
  printf("Perimeter: %f\n", 2 * PI * rad);
  printf("Area of the circle: %f", PI * pow(rad, 2));
  return 0;
}
