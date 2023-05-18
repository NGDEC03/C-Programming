#include <stdio.h>
int main(){
    int m, n,c=0;
    scanf("%d", &m);
    scanf("%d", &n);
    int ele=m*n;
    int a[m][n],b[m][n];
      for(int i=0;i<m;i++){
      for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
        for(int i=0;i<m;i++){
      for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);

  }
       for(int i=0;i<m;i++){
      for(int j=0;j<n;j++)
        {
          if(a[i][j]==b[i][j])
            c++;
        }
       }
    if(c==ele)
      printf("Equal Matrices");
    else
      printf("UnEqual Matrices");

}