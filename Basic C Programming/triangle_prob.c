#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the value of first and second angle of triangle:\n");
    scanf("%f%f",&a,&b);
    printf("The third angle of triangle is %f",180-(a+b));
return 0;
}