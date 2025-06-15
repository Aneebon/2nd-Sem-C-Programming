#include<stdio.h>
int main(){
    float r,area;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    area= r*r*3.14;
    printf("The area of the circle is: %f", area);
    return 0;
}