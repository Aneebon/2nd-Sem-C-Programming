#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%c", 'A' + j-1);
        }
        printf("\n");
    }
    
    return 0;

}