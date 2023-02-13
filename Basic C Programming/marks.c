#include <stdio.h>
int main(){
    float marks[5];
    printf("Enter the marks of the student:\n");
    for(int i=0;i<5;i++){
        scanf("%f",&marks[i]);
    }
    printf("The total marks of the student is %f",marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
    printf("The average marks of the student is %f",(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5);
    printf("The percentage of the student is %f",((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/180)*100); //Assuming that the maximum marks is 180
    return 0;
}