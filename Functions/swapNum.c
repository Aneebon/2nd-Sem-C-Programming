#include<stdio.h>
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("After swapping: a= %d and b = %d",a,b );
    return;
}
int main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    swap(x,y);
    return 0;
}