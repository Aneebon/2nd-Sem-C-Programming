//Print the AP - 4,7,10,13.. upto ‘n’ terms
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 4; i <= 3*n-1; i=i+3)
    {
        printf("%d \n", i);
    }
    
    return 0;
}
