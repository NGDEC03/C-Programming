#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d",&c);
    scanf("%d",&a);
    scanf("%d",&b);
    int k=((a*b)-a)+c;
    printf("%d",k);
    return 0;
}