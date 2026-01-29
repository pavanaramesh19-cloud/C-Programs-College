#include <stdio.h>
typedef struct {
    int emp_Id;
    char name[20];
    float salary;
} Employee;
int main(){
    Employee e1= {1001, "kiran", 45000.50};   
    printf("Employee Id: %d\n", e1.emp_Id);
    printf(" name: %s\n", e1.name);
    printf("salary: %.2f\n", e1.salary);
    return 0;
}
