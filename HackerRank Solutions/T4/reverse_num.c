#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,rv=0,temp;
    scanf("%d",&n);
    while(n>0){
        temp=n%10;
        rv=rv*10+temp;
        n/=10;
    }
    printf("%d",rv);
       
    return 0;
}
