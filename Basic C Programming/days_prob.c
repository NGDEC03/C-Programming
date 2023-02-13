#include <stdio.h>
int main(){
    float days;
    printf("Enter the days:\n");
    scanf("%f",&days);
    printf("Years: %f\n",days/365);
    printf("Weeks: %f\n",days/7);

    return 0;
}