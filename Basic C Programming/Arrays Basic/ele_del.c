#include <stdio.h>

int main(void) {

    int a;
    scanf("%d", &a);
    int n, arr[a];
    for (int k = 0; k < a; k++)
      scanf("%d", &arr[k]);
    printf("Enter The Index Of Item Deletion\n");
    scanf("%d", &n);
    while (n >= 0) {
      arr[n - 1] = arr[n - 1] ^ arr[n];
      arr[n] = arr[n - 1] ^ arr[n];
      arr[n - 1] = arr[n - 1] ^ arr[n];
      n = n - 1;
    }
    for (int i = 1; i < a; i++)
      printf("%d ", arr[i]);
    return 0;
}
