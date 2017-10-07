#include <cstdio>
#include <cstring>

int main() {
  char number[11];
  printf("Enter a number (up to 10 digits): ");
  scanf("%s", number);
  int len = strlen(number);
  for (int i = 0; i < len; i++) {
    printf("%s\n", number);
    number[i] = '\b';
  }
  return 0;
}
