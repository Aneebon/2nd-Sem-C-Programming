#include<stdio.h>
int main(){
    int h,b,area;
    printf("Enter height of traingle: ");
    scanf("%d", &h);
    printf("Enter base of traingle: ");
    scanf("%d", &b);
    area = (b*h)/2;
    printf("The area of the traingle is: %d", area);
    return 0;
}