#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,r;
    scanf("%d %d %d",&a,&b,&r);
    if(a+b==r){
        printf("+");
    }
    else if(a-b==r || b-a==r){
        printf("-");
    }
    else if(a*b==r){
        printf("*");
    }
    else if(a%b==r || b%a==r){
        printf("%%");
    }
    else{
        printf("/");
    }
    return 0;
}
