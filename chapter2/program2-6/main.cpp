#include <cstdio>

int main () {
  int negatives = 0;
  int positives = 0;
  while (true) {
    int num;
    scanf("%d", &num);
    if (num > 0) {
      positives++;
    } else if (num < 0) {
      negatives++;
    } else {
      break;
    }
  }
  printf("There are %d positive and %d negative numbers.\n", positives, negatives);
  return 0;
}
