#include <cstdio>

#define PI 3.141593

int main () {
  float rad, area;
  printf("This program calculates the area of a circle\nEnter a radius: ");
  scanf("%f", &rad);
  area = PI * rad * rad;
  printf("The area is: %.2f\n", area);
  return 0;
}

