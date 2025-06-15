#include<stdio.h>
int main(){
    int n, rev=0, a;
    printf("Enter n:");
    scanf("%d", &n);
    if (n==0)
    {
        printf("Zero");
    }
    while (n>0)
    {
        rev= rev*10 + n%10;
        n/=10;
    }
    while (rev>0)
    {
        a= rev%10;
        rev/=10;
        if (a==0)
        {
            printf("Zero");
        }
        else if (a==1)
        {
            printf("one");
        }
        else if (a == 2) {printf("Two ");}
        else if (a == 3) {printf("Three ");}
        else if (a == 4) {printf("Four ");}
        else if (a == 5) {printf("Five ");}
        else if (a == 6) {printf("Six ");}
        else if (a == 7) {printf("Seven ");}
        else if (a == 8) {printf("Eight ");}
        else if (a == 9) {printf("Nine ");}
    }
    
return 0;
    }
    
    
    