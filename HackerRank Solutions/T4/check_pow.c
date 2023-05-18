#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    float x;
    scanf("%d",&n);
int z=log(n)/log(2);
    x=log(n)/log(2);
    if(x==z)
        printf("1");
    else
        printf("0");
    return 0;
}
