#include <cstdio>

int main () {
  float rice, sugar;
  printf("What is the price of a KG of rice? ");
  scanf("%f", &rice);

  printf("What is the price of a KG of sugar? ");
  scanf("%f", &sugar);

  printf("*** LIST OF ITEMS ***\n");
  printf("Item \t\t Price\n");
  printf("Rice \t\t Rs %.2f\n", rice);
  printf("Sugar \t\t Rs %.2f\n", sugar);
  return 0;
}
