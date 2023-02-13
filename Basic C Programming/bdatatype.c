#include <stdio.h>
int main()
{
    // int datatype I/O
    int a,b;
    printf("Enter The Values Of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n",a,b);

// float datatype I/O
    float c,d;
    printf("Enter The Values Of c and d:\n");
    scanf("%f%f",&c,&d);
    printf("%f\n%f\n",c,d);

// double datatype I/O
    double e,f;
    printf("Enter The Values Of e and f:\n");
    scanf("%lf%lf",&e,&f);
    printf("%lf\n%lf\n",e,f);
// char datatype I/O
    char g,h;
    printf("Enter The Values Of g and h:\n");
    scanf("%c%c",&g,&h);
    printf("%c\n%c",g,h);

    return 0;
}
