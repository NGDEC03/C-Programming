#include <stdio.h>

int main(void) {
  int marks[3];
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  int n = marks[0];
  for (int j = 0; j < 3; j++)
    if (marks[j] > n)
      n = marks[j];
  printf("%d", n);
  return 0;
}
