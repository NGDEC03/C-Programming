#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a=0,b=1,sum;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    sum=a+b;
    for(int i=2;i<n;i++){
        printf("%d ",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}
