#include <stdio.h>
int main(){
    int a,b;
    printf("Enter The Values Of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Addition Is %d\n",a+b);
    printf("Subtraction Is %d\n",a-b);
    printf("Multiplication Is %d\n",a*b);
    printf("Division Is %f\n",(float)a/b); //  Explicit Typecasting
    printf("Modulus Is %d",a%b);
    return 0;
}