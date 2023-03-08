#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float a,b,c,p,c1;
    c1=0;
    char t1,t2,t3;
    t1='t';
    t2='t';
    t3='t';
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&p);
    if(a<p){
        c1+=1;
        t1='f';
    }
    if(b<p){
     c1+=1;
        t2='f';
    }
    if(c<p){
        c1+=1;
        t3='f';
    }
    if(t1=='f'){
        printf("%1.3f\n",1/c1);
    }
    else{
        printf("0.000\n");
    }
    if(t2=='f'){
        printf("%1.3f\n",1/c1);
    }
    
    else{
      printf("0.000\n");  
    }
    if(t3=='f'){
        printf("%1.3f\n",1/c1);
    }
    else{
        printf("0.000");
    }
    
    return 0;
}