#include <cstdio>

int main() {
  float length, width;
  printf("Enter length and width: ");
  scanf("%f %f", &length, &width);
  float area = length * width;
  float perimeter = 2 * (length + width);
  printf("Perimeter: %.2f\n", perimeter);
  printf("Area: %.2f\n", area);
  return 0;
}
