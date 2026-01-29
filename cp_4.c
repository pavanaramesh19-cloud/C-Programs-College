#include <stdio.h>
 int main() {
    int a=5, b=3, c=2, d=4;
    int result= (a*b)+(c*d)-(a+b-c)/d;
    printf("Result=%d\n",result);
    return 0;
}