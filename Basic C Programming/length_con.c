#include <stdio.h>
int main(){
    int l;
    printf("Enter your length in centimeters\n");
    scanf("%d",&l);
    printf("Length in meters is %f\n",(float)l/100);
    printf("Length in kilometers is %f",(float)l/100000);
    return 0;
}