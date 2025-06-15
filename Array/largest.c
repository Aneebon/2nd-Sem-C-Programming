#include<stdio.h>
int main(){
    int numbers[5];
    int largest=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number at index %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        if (numbers[i]>largest)
        {
            largest=numbers[i];
        }
    }
    printf("The largest number is %d\n", largest);
    return 0;       
}
