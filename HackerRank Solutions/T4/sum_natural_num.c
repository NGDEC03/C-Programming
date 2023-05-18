#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s+=i;
    printf("%d",s);
    return 0;
}
