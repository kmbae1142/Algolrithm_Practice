#include <stdio.h>
#include <string.h>

int main (void) {
    
    int t;
    int num1, num2;
    int i=1;
    
    scanf("%d",&t);
    
    while(i<=t) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1+num2);
        i++;
    }
    
    
    return 0;

}