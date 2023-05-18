#include <math.h>
#include <stdio.h>

int main(void) {
  int n;
  int j = 0;
  int c = 0;
  scanf("%d", &n);
  int l = log10(n) + 1;
  char a[l];
  int k = l;
  int temp;
  int i = 0;
  while (n > 0) {
    temp = n % 10;
    a[i] = temp;
    n /= 10;
    i++;
  }
while(j<l){
  printf("%d",a[j]);
    j++;
}
  printf("\n");
  }