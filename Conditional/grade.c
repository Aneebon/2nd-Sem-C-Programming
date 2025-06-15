#include<stdio.h>
int main(){
    int a;
    printf("Enter total marks: ");
    scanf("%d", &a);
    if (a>=90&&a<=100)
    {
        printf("Secured grade is O");
    }
    else if (a>=80&&a<=89)
    {
        printf("Secured grade is E");
    }
    else if (a>=70 && a<=79)
    {
        printf("Secured grade is A");
    }
    else if (a>=60 && a<=69)
    {
        printf("Secured grade is B");
    }
    else if (a>=50 && a<=59)
    {
        printf("Secured grade is C");
    }
    else if (a>=40 && a<=49)
    {
        printf("Secured grade is D");
    }
    else
    {
        printf("Secured grade is E");
    }
    return 0;
}