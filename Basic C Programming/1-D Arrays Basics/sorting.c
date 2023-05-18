#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("enter the %dth element of array\n", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Before Sorting\n");
  for (int k = 0; k < n; k++)
    printf("%d ", arr[k]);
  printf("\n");

  for (int j = 0; j < n - 1; j++) {
    for (int l = n - 2; l >= 0; l--)
      if (arr[l] > arr[l + 1]) {
        arr[l] = arr[l] ^ arr[l + 1];
        arr[l + 1] = arr[l] ^ arr[l + 1];
        arr[l] = arr[l] ^ arr[l + 1];
      }
  }
  printf("After Sorting\n");
  for (int k = 0; k < n; k++)
    printf("%d ", arr[k]);
  return 0;
}