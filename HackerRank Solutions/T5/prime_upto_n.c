#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=0;
        for(int j=2;j<=i;j++){
            if(i%j==0)
                c++;
        }
        if(c==1)
            printf("%d,",i);
    }
    
    return 0;
}
