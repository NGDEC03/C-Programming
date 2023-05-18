#include <stdio.h>

int main(void) {
    int n;
    int c = 0;
    scanf("%d", &n);
    int temp;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            c += 1;
        }
        i++;
    }
    if (c == 0)
        printf("Prime No");
    else
        printf("Non Prime No");
        
  return 0;
}