#include <stdio.h>

int main(void) {

  int marks[3], s = 0;
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (int j = 0; j < 3; j++)
    s += marks[j];
  printf("%d", s);
    return 0;
}
