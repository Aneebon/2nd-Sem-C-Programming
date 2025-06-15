#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    c = pow(a,b);
    printf("The power of %d ^ %d is:%d ",a,b,c );
    return 0;
}