#include<stdio.h>
int main(){
    int a = 5;
    printf("%p", &a);//It will print the address of a, not he value of a. if value of a changed then also address remains the same.
    //&a is the address of a
    return 0;
}