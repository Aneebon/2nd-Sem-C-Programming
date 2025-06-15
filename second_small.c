#include<stdio.h>
int main(){
    int numbers[5];
    int smallest=numbers[0];
    int second_smallest=numbers[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number at index %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        if (numbers[i]<smallest&&numbers[i]<second_smallest)
        {
            second_smallest=smallest;
            smallest=numbers[i];
        }
        else if (numbers[i]<second_smallest)
        {
            second_smallest=numbers[i];
        }
    }
    printf("The second smallest number is %d\n", second_smallest);
    return 0;
}