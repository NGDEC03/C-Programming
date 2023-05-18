#include <stdio.h>
int main(){
      int sum=0,m;
  scanf("%d", &m);
  int a[m][m];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]);
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j <= i; j++)
  sum+=a[i][j]
  }

}