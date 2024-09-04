#include <stdio.h>

int main (void) {
    int num1;
    int num2;
    int re1, re2, re3;
    int result;
    
    scanf("%d %d",&num1,&num2);
    
    re1=num1*((num2%100)-((num2%100)/10)*10);
    re2=num1*((num2%100)/10);
    re3=num1*(num2/100);
    result=num1*num2;
    
    printf("%d\n",re1);
    printf("%d\n",re2);
    printf("%d\n",re3);
    printf("%d\n",result);
    return 0;
}