#include <stdio.h>

int main(void) {


  int a, c = 0, c1 = 0;
  scanf("%d", &a);
  int n, arr[a], arr1[50];
  for (int k = 0; k < a; k++)
    scanf("%d", &arr[k]);
  for (int i = 0; i < a; i++) {
    for (int j = i + 1; j < a; j++) {
      if (arr[i] == arr[j]) {
        arr1[c1] = arr[i];
        c += 1;
        c1++;
      }
    }
  }
  printf("Duplicate Element Count Is %d\n", c);
  for (int l = 0; l < c1; l++)
    printf("%d Duplicate Element Is %d\n", l + 1, arr1[l]);
  return 0;
  }
