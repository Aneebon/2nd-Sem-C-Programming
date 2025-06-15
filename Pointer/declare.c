#include<stdio.h>
int main(){
    int n;
    int *ptr;//this is a pointer
    ptr = &n;//it will store the adress of n
    n = 20;//value of variable n is 20
    printf("Using Variable num:\n");
    printf("Value of variable n is: %d\n", n);
    printf("Adress of variable n is: %p\n", &n);
    printf("Using pointer variable:\n");
    printf("Value of variable n is: %d\n", *ptr);//*ptr mane hoche ptr variable er je value ta mane a er value
    printf("Address of variable n is: %p\n", ptr);//adress of n 
    return 0;
}