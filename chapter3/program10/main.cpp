#include <cstdio>
#include <cmath>

int main () {
  float L, R;
  printf("Enter inductance (L) (in Henry, usually < 0.01): ");
  scanf("%f", &L);
  printf("Enter resistance (R): ");
  scanf("%f", &R);
  for (float C = 0.01; C <= 0.10; C += 0.01) {
    float freq = sqrt( (1 / (L * C)) - (pow(R, 2) / (4 * pow(C, 2))) );
    printf("Frequency at %.2fC: %.2f\n", C, freq);
  }
  return 0;
}
