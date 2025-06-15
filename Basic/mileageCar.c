#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the distance travelled by the car: ");
    scanf("%d", &a);
    printf("Enter the fuel consumed by the car: ");
    scanf("%d", &b);
    float c = a/b;
    printf("The mileage of the car is: %f",c);
    return 0;
}