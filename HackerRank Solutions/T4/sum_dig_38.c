#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
       int n,temp,sum=0;
    scanf("%d",&n);
    while(n>0){
        temp=n%10;
        sum+=temp;
        n/=10;
    }
    printf("%d\n",sum); 
    }
    
    return 0;
}
