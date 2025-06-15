#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the value of side-1: ");
    scanf("%d", &n1);
    
    printf("Enter the value of side-2: ");
    scanf("%d", &n2);
    
    printf("Enter the value of side-3: ");
    scanf("%d", &n3);
    if (n1==n2 && n1==n3)
    {
        printf("Equilateral");
    }
    else if (n1==n2 && n1!=n3 && n2!=n3)
    {
        printf("Isoscles");
    }
    else if (n2==n3 && n1!=n2 && n1!=n3)
    {
        printf("Isoscles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}