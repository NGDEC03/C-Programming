#include <stdio.h>
int main(){
        int m,sum=0;
  scanf("%d", &m);
  int a[m][m],b[m][m];
    for(int i=0;i<m;i++){
    for(int j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  }
     for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
  if(i==j)
        sum+=a[i][j];  }
  }
  printf("%d",sum);
}

