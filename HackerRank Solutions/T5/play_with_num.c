#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float fac(n){
    int fac=1;
        for(int i=1;i<=n;i++)
        fac*=i;
    return fac;
    
}

int main() {

    float n,sum=0;
    scanf("%f",&n);
    for(int i=1;i<=n;i++)
        sum+=(i/fac(i));
    printf("%f",sum);

  
    return 0;
}

