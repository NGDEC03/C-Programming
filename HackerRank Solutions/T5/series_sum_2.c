#include <stdio.h>

int main() {
  int n, i;
  float sum = 0;
  // printf("Enter number of terms: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum += 1 / ((2 * i - 1) * 1.0);
  }

  printf("%f", sum);

  return 0;
}
