#include<stdio.h>
int main(){
    int n;
    printf("Enter the week day(0-6): ");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
     case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    }
    return 0;
}