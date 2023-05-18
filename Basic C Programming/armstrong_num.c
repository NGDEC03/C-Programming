#include <stdio.h>
#include <math.h>
int main(void) {
int n;
  scanf("%d",&n);
  int c=n;
  int l=log10(n)+1;
  int temp,sum=0;
  while(n>0){
    temp=n%10;
    sum+=pow(temp,l);
    n/=10;
    }
if(c==sum)
  printf("Armstrong No");
else
  printf("Non Armstrong No");
}