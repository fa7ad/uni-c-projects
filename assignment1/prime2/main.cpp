#include <cstdio>
/*
 * This is an implementation of the sieve of Eratosthenes
 */

int main() {
  int n = 100;
  bool nprime[n+1];

  for (int p=2; p*p<=n; p++) {
    if (nprime[p] == false) {
      for (int i=p*2; i<=n; i += p) nprime[i] = true;
    }
  }

  printf("1\n");
  for (int p=2; p<=n; p++)
    if (!nprime[p]) printf("%d\n", p);

  return 0;
}
