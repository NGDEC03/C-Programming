#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,n,k;
    scanf("%d",&c);
    scanf("%d",&k);
    scanf("%d",&n);
    printf("%1.0lf",(c*(pow(k,n))));
    return 0;
}