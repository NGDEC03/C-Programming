#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(i%2)
            printf("%d ",i); 
    return 0;
}
