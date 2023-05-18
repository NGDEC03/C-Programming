#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        int p=b/a;
        printf("%d\n",p*c);
        
    }

    return 0;
}
