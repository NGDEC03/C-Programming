#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,b,g,i,d;
    scanf("%d %d %d %d %d",&n,&b,&g,&i,&d);
    if(((i*b)-(g*d))>0){
        printf("Simple Questions");
    }
    else if(((i*b)-(g*d))<0){
        printf("Funny Questions");
    }
    else{
        printf("God Knows!");
    }
    return 0;
}
