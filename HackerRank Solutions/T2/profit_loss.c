#include <stdio.h>
int main() {
    float c,s;
    scanf("%f",&c);
    scanf("%f",&s);
    if(s>c){
    printf("Profit\n");
        printf("%1.2f%%",(s-c)*100/c);
    }
               else{
                   printf("Loss\n");
                   printf("%1.2f%%",(c-s)*100/c);
               }
    return 0;
}
