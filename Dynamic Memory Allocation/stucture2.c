#include <stdio.h>

struct EmpDatabase {
    int id_number;
    int age;
    float salary;
} emp, employee; // Both emp and employee variables are declared here

int main() {
    // Assign values to the structure members of employee
    employee.age = 22;
    employee.id_number = 1234;
    employee.salary = 12000.21;

    // Display values of employee instead of emp, avoiding uninitialized access
    printf("Age : %d\n", employee.age);
    printf("Id Number : %d\n", employee.id_number);
    printf("Salary : %.2f\n", employee.salary);

    return 0;
}     