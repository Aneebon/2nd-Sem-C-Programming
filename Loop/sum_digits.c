#include <stdio.h>

int main() {
    int n,a, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0)
    {
        a=n%10;
        sum+=a;
        n/=10;
    }
    printf("%d ", sum);
    

    return 0;
}
