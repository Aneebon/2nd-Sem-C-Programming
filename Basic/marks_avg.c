#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,avg;
    printf("Enter the number of 1st subject out of 200: ");
    scanf("%d", &n1);
    printf("Enter the number of 2nd subject out of 200: ");
    scanf("%d", &n2);
    printf("Enter the number of 3rd subject out of 200: ");
    scanf("%d", &n3);
    printf("Enter the number of 4th subject out of 200: ");
    scanf("%d", &n4);
    printf("Enter the number of 5th subject out of 200: ");
    scanf("%d", &n5);
    int sum = n1+n2+n3+n4+n5;
    avg = sum/5;
    int percentage = (sum*100)/1000;
    printf("The average is %d and the percentage is %d ", avg,percentage);
    return 0;
}