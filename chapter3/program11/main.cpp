#include <cstdio>

int main () {
  char num[4];
  printf("Enter a 4 digit number: ");
  scanf("%s", num);
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += (num[i] - '0');
  }
  printf("Sum of all the digits in %s is %d.\n", num, sum);
  return 0;
}
