//Print 1 to n using After Call
#include<stdio.h>
void increasing(int n){
    if (n==0)
    {
        return;
    }
    else
        {increasing(n-1);}
    printf("%d ", n);
    return;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    increasing(a);
    return 0;
}