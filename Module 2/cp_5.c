#include <stdio.h>

int main() {
    int a=10;
    a--;      
    int b = a--;    
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n",b);
    return 0;
}