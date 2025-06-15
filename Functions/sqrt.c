#include<stdio.h>
#include<math.h>
int main(){
    int n,a;
    printf("Enter a number:");
    scanf("%d", &n);
    a = sqrt(n);
    printf("The square root of %d is %d", n, a);
    return 0;
}