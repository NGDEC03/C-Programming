#include <stdio.h>

int main(void) {
  int marks[3], n;
  scanf("%d", &n);
  for (int i = 0; i < 3; i++)
    scanf("%d", &marks[i]);
  for (int j = 0; j < 3; j++) {
    if (marks[j] == n) {
      printf("Entered Number is in array\n");
      break;
    }
  }
    return 0;
}
