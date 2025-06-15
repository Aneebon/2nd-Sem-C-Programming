//Print the table of n, where n is a user input
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The table of %d is: \n", n);
    for (int i = n; i <= 10*n; i=i+n)
    {
        printf("%d \n", i);
    }
    
    return 0;
}
