#include <cstdio>
#include <cmath>

int main () {
  float demand, setup, holding;
  float eoq, tbo;
  printf("Enter Demand rate (items per unit time): ");
  scanf("%f", &demand);
  printf("Enter Setup costs (per order): ");
  scanf("%f", &setup);
  printf("Enter Holding cost (per item per unit time): ");
  scanf("%f", &holding);

  eoq = sqrt( (2 * demand * setup) / holding );
  tbo = sqrt( (2 * setup) / (demand * holding) );

  printf("EOQ: %.2f\n", eoq);
  printf("TBO: %.2f\n", tbo);
  return 0;
}
