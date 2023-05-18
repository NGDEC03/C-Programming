#include <math.h>
#include <stdio.h>

int main(void) {
  int n;
  int c = 0;
  scanf("%d", &n);
  int l = log10(n) + 1;
  int temp,k=n;
  while (n > 0) {
    temp = n % 10;
    c =(c*10)+temp;
    n /= 10;
  }
    if (c == k)
        printf("Palindrome No");
    else
        printf("Non Palindrome No");
  }