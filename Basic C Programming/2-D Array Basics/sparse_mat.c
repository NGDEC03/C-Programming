#include <stdio.h>
int main(){
      int m, n, c = 0, c1 = 0;
  scanf("%d", &m);
  scanf("%d", &n);
  int a[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      if (a[i][j] == 0)
        c++;
      else
        c1++;
  }
  // printf("%d %d", c, c1);
  if (c > c1)
    printf("Sparse Matrix");
  else
    printf("Not A Sparse Matrix");

}