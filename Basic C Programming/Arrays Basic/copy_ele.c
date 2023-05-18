#include <stdio.h>

int main(void) {

  int marks[3], m[3];
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  printf("\n");
  for (int j = 0; j < 3; j++)
    m[j] = marks[j];
  for (int k = 0; k < 3; k++)
    printf("%d-%d\n", marks[k], m[k]);
  return 0;
}
