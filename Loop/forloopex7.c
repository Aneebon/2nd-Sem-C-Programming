//Print the AP 1,3,5,7,9... upto n terms
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= 2*n-1; i=i+2)
    {
        printf("%d", i);
    }
    
    return 0;
}
//1,3,5,7...n here common difference is 2. we know, n th term for AP= a+(n-1)d
// so, for a=1, 1+(n-1)2= 2n-1.
// initialisation is i=1, condition is i<= 2n-1 and updation is i=i+2 as common difference is 2.