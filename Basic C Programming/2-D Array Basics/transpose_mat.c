#include <stdio.h>
int main(){

  int m, n, sum = 0;
  scanf("%d", &m);
  scanf("%d", &n);
  int a[m][n], b[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%d ", a[j][i]);
    printf("\n");
  }

}