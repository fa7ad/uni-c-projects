#include <cstdio>

void printAdd(float x, float y);
void printSub(float x, float y);
void printMul(float x, float y);
void printDiv(float x, float y);

int main () {
  float a, b;
  char op;
  scanf("%f %c %f", &a, &op, &b);

  switch (op) {
    case '+':
      printAdd(a, b);
      break;
    case '-':
      printSub(a, b);
      break;
    case 'x':
    case 'X':
    case '*':
      printMul(a, b);
      break;
    case '/':
      printDiv(a, b);
      break;
    default:
      printf("Invalid operator, please try again.\n");
      main();
      break;
  }

  return 0;
}

void printAdd(float x, float y) {
  printf("%0.3f + %0.3f = %0.3f\n", x, y, x+y);
}

void printSub(float x, float y) {
  printf("%0.3f - %0.3f = %0.3f\n", x, y, x-y);
}

void printMul(float x, float y) {
  printf("%0.3f * %0.3f = %0.3f\n", x, y, x*y);
}

void printDiv(float x, float y) {
  printf("%0.3f / %0.3f = %0.3f\n", x, y, x/y);
}
