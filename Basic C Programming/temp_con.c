#include <stdio.h>
int main(){
  float t,t1;
    // celsius to fahrenheit
    printf("Enter the temperature in celsius:\n");
    scanf("%f",&t);
    printf("Temperature in fahrenheit is %f\n",((t*9)/5)+32);
    // fahernheit to celsius
    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f",&t1);
    printf("Temperature in celsius is %f",((t1-32)*5)/9);
    return 0;


}