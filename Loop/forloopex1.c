#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i=i+1)
    {
        printf("Hello world\n");
    }
    
    return 0;
}
