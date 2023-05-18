#include <stdio.h>

int main(void) {


  int marks[3], c = 0;
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (int j = 0; j < 3; j++) {
    if (marks[j] < 0)
      c += 1;
  }
  printf("Number Of Negative Elements In Array Is %d", c);
    return 0;   
}
