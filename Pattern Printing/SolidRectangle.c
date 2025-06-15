#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    int m;
    printf("Enter no. of coloumns:");
    scanf("%d", &m);
    for (int i = 1; i <=n; i++)//This gives the no. of coloums
    {
        for (int i = 1; i <=m; i++)//This gives the no. of rows
        {
            printf("*");
        }
     printf("\n");   
    }
    return 0;
}
//No. of lines= No. of rows
//No. of stars in each lines= No. of coloumns