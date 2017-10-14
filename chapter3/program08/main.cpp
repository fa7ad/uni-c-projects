#include <cstdio>
#include <cmath>

int main () {
  int time;
  printf("Enter time interval (in seconds): ");
  scanf("%d", &time);
  while (true) {
    float u, a, dist;
    char yn;
    printf("Enter u (initial speed in m/s): ");
    scanf("%f", &u);
    printf("Enter a (acceleration in m/s^2): ");
    scanf("%f", &a);
    dist = (u * time) + (a * pow(time, 2)) / 2;
    printf("Distance: %.2fm\n", dist);
    scanf("%*c");
    printf("Do you want to try different values of u and a? [y/N] \n");
    scanf("%c", &yn);
    if (yn == 'Y' || yn == 'y') {
      continue;
    } else {
      break;
    }
  }
  return 0;
}
