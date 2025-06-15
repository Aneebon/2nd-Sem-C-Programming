#include<stdio.h>
int factorial(int num){
    int nfact = 1;
    for (int i = 2; i <= num; i++)
    {
        nfact = nfact*i;
    }
    return nfact;
    
}
int main(){
 int a;
 printf("Enter a number: ");
 scanf("%d", &a);
 int b = factorial(a);
 printf("%d ", b);
 return 0;
}