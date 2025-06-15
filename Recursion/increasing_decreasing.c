#include<stdio.h>
void incredecre(int n){
    if (n==0)
    {
        return;
    }
    printf("%d\n", n);
    incredecre(n-1);
    printf("%d\n", n);
    return;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    incredecre(a);
    return 0;
}