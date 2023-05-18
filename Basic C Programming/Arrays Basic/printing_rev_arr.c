#include <stdio.h>

int main(void) {
    int marks[3];
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (int j = 2; j >=0; j--)
  printf("%d ",marks[j]);
    return 0;
}
