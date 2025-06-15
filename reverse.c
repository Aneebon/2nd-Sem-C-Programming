#include<stdio.h>
int main(){
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number at index %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("The numbers in reverse order are:\n");
    for (int i = 4; i >=0; i--)
    {
        printf("%d ", numbers[i]);
    }
    return 0;


    
}