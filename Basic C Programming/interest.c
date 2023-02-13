#include <stdio.h>
#include <math.h>
int main(){
    float p,t,r;
    printf("Enter the value of principle, time and rate:\n");
    scanf("%f%f%f",&p,&t,&r);

    printf("The simple interest is %f",(p*t*r)/100);
    printf("The compound interest is %f",p*(pow((1+r/100),t)-1));
    return 0;
}