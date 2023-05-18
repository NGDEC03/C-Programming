#include <stdio.h>
int main(){
  int m, n, c = 0;
  scanf("%d", &m);
  int a[m][m], b[m][m];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]);
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++)
      b[j][i] = a[j][i];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == b[i][j])
        c++;
    }
  }
  if (c == m * m)
    printf("Symmetric Matrix");

}
