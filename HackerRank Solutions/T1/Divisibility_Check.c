#include <stdio.h>
int main() {
   int a,d1,d2;
    scanf("%d",&a);
    scanf("%d",&d1);
    scanf("%d",&d2);
if(a%d1==0 && a%d2==0){
    printf("Yes.");
}
else{
    printf("No.");
}
    return 0;
}
