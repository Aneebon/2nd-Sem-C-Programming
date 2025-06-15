#include<stdio.h>
int max(int a, int b){
    int result;
    if (a>b)
    {
        result = a;
    }
    else
    {
       result = b;
    }
    return result;
}
int main(){
    int n1,n2,ans;
    printf("Enter number-1: ");
    scanf("%d", &n1);
    printf("Enter number-2: ");
    scanf("%d", &n2);
    ans = max(n1,n2);
    printf("The max of %d and %d is: %d ", n1,n2,ans);
    return 0;
}
