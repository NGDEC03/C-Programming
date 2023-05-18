#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,temp,sum=0;
   
    scanf("%d",&n);
     int len=log10(n)+1;
    int a=n;
    while(n>0){
        temp=n%10;
        sum+=pow(temp,len);
        n/=10;
    }
    if(sum==a)
        printf("Armstrong Number.");
    else
        printf("Not Armstrong.");
    return 0;
}
