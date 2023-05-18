#include <stdio.h>

int main(void) {

  int marks[3], j, temp, fac;
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (j = 0; j < 3; j++) {
    fac = 1;
    int n = marks[j];
    for (int k = 1; k <= n; k++)
      fac *= k;
    printf("%d\n", fac);
  }
  return 0;}
