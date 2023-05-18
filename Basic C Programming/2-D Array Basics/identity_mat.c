#include <stdio.h>
int main(){
    int m, c = 0, c1 = 0, ele;
  scanf("%d", &m);
  int a[m][m];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]);
  }
  ele = (m * m) - m;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (i == j) {
        c += a[i][j];
      } else
        c1 += a[i][j];
    }
  }
  if (c == m && c1 == 0) {
    printf("Identity Matrix\n");
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++)
        printf("  %d ", a[i][j]);
      printf("\n");
    }
  }
  else
    printf("Not An Identity Matrix");


}