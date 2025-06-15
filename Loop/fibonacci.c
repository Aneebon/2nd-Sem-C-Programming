#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, f =0, s =1, next, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", f);
        next = f + s;
        f = s;
        s = next;
    }
    
    return 0;
}
