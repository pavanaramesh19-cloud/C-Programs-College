#include<stdio.h>
struct Student {
    int id;
    char name[20];
    float marks;
};
int main(){
    struct Student s1 = {118 , "Yuva", 87.52};
    printf("ID: %d\n",s1.id);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.2f\n",s1.marks);

    struct Student s2 = {145 , "Jasmitha", 85.6};
     printf("ID: %d\n",s2.id);
    printf("Name: %s\n",s2.name);
    printf("Marks: %.2f\n",s2.marks);

    return 0;
}

