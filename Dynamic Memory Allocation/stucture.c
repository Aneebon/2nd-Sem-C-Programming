#include <stdio.h>

struct EmpDatabase {
    int id_number;
    int age;
    float salary;
};

int main() {
    struct EmpDatabase employee;

    // Assign values to the structure members
    employee.age = 22;
    employee.id_number = 1234;
    employee.salary = 12000.21;

    // Print the values
    printf("Age : %d\n", employee.age);
    printf("Id Number : %d\n", employee.id_number);
    printf("Salary : %.2f\n", employee.salary);

    return 0;
}         