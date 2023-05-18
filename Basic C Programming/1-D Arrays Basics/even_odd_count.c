#include <stdio.h>

int main(void) {

  int marks[3], c = 0, c1 = 0;
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (int j = 0; j < 3; j++) {
    if (marks[j] % 2 == 0)
      c += 1;
    else
      c1 += 1;
  }
  printf("No Of Even Elements is %d\n", c);
  printf("No Of Odd Elements is %d\n", c1);
    return 0;
}
