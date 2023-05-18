#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum1(int x){
    int sum=0;
    while(x>0){
        int temp=x%10;
        sum+=temp;
        x/=10;
    }
    return sum;
}
int main() {
int n;
    scanf("%d",&n);
    int a=sum1(n);
    int len=log10(a)+1;
    while(len!=1){
        a=sum1(a); 
        len=log10(a)+1;
    }
    
    printf("%d",a);
    return 0;
}
