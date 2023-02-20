
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
     if(a>=4 && a<12){
        printf("Good Morning");
    }
    else if(a>=12 && a<16){
        printf("Good Afternoon");
    }
    else if(a>=16 && a<21){
        printf("Good Evening");
    }
    else if((a>=22 && a<24) ||(a>=1 && a<4)){
        printf("Good Night");
    }
    return 0;
}