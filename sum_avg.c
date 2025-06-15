#include<stdio.h>
int main(){
    int numbers[10];
    int sum=0;
    float avg;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the number at index %d: ", i);
    //     scanf("%d", &numbers[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     sum+=numbers[i];
    // }
    // avg=(float)sum/10;
    // printf("The sum of the numbers is %d\n", sum);
    // printf("The average of the numbers is %f\n", avg);
    for (int i = 0; i < 10; i++)
    {
        printf("%d>", i+1);
        scanf("%d", &numbers[i]);
        sum+=numbers[i];
    }
    avg=(float)sum/10;
    printf("The sum of the numbers is %d\n", sum);
    printf("The average of the numbers is %f\n", avg);
    
    return 0;
    
}