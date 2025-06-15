#include<stdio.h>
int main(){
    int p,r,remaining;
    printf("Enter the amount in Paisa: ");
    scanf("%d", &p);
    r = p/100;
    remaining = p%100;
    printf("%d paisa = %d Rupee and %d paisa", p,r,remaining);
    return 0;
}