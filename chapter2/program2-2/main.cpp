#include <cstdio>

int main () {
  float price;
  printf("Enter the price in decimal form: ");
  scanf("%f", &price);
  printf("The price is %.0f paise\n", price * 100);
  return 0;
}
