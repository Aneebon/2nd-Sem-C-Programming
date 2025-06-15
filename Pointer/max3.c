#include<stdio.h>
int main(){
    int num1, num2, num3; 
    int *p1, *p2, *p3; 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if (*p1 > *p2) {
        if (*p1 > *p3) {
            printf("The largest number is: %d\n", *p1);
        } else {
            printf("The largest number is: %d\n", *p3);
        }
    } else {
        if (*p2 > *p3) {
            printf("The largest number is: %d\n", *p2);
        } else {
            printf("The largest number is: %d\n", *p3);
        }
    }
    return 0;
}