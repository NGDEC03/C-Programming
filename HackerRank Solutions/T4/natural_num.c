#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        sum+=i;
    printf("%d",sum);
    return 0;
}
