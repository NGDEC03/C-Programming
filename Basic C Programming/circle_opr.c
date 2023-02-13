#include <stdio.h>
int main(){
    float r;
    printf("Enter The Value Of Radius of circle:\n");
    scanf("%f",&r);
    printf("Diameter Of Circle is %f\n",2*r);
    printf("Circumference Of Circle is %f\n",2*3.14*r);
    printf("Area Of Circle is %f",3.14*r*r);
    return 0;
}