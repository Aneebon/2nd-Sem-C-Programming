#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >0; i/=10)
    {
        a = i%10;
        printf("%d ",a);
    }
    
    return 0;
}