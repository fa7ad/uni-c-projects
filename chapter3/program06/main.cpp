#include <cstdio>

int main () {
  float depr, salv, pprice, years;
  printf("Enter Purchase Price: ");
  scanf("%f", &pprice);
  printf("Enter Years of Service: ");
  scanf("%f", &years);
  printf("Enter Annual Deprecation: ");
  scanf("%f", &depr);

  salv = pprice - (depr * years);
  printf("Salvage Price: %.2f\n", salv);
  return 0;
}
