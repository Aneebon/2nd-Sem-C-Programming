#include<stdio.h>
int main(){
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter no. at index %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("The odd numbers are: \n ");
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i]%2!=0)
        {
            printf("%d", numbers[i]);
        }
    }
    
    return 0;   
}