#include<stdio.h>
int main(){
    int x =1, y=2;
    int *ip;
    int z[10] = {1,2,3,4,5,6,7,8,9,10};
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z;
    printf("Value of first element of array is: %d\n", *ip);
    printf("Adress is: %p\n", ip);
    printf("Array second element is: %d\n", *(ip+1));
    printf("Adress of second element is: %p\n", &z[1]);
    return 0;
}