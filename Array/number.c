#include<stdio.h>
int main(){
    int myNumbers[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf("The number at index %d is %d\n", i, myNumbers[i]);
    }
    
}