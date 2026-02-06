#include <stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char grade;
    printf("enter marks for three subject(out of 100):");
    scanf("%f %f %f",&m1,&m2,&m3);
    //arithemetic operations
    total=m1+m2+m3;
    average=total/3;
    //display total and average
    printf("\ntotal marks=%.2f",total);
    printf("\naverage marks=%.2f",average);
    //determine grade using if-else 
    if (average>=90)
      grade='A';
    else if (average>=80)
      grade='B';
    else if (average>=70)
      grade='C';
    else if (average>=60)
      grade='D';
    else if (average>=50)
      grade='E';
    else
      grade='F';
    //display garde
    printf("\ngrade=%c\n",grade);
    return 0;

}