//Using Loop and function
// #include<stdio.h>
// int power(int a, int b){
//     int x =1;
//     for (int i = 1; i <=b; i++)
//     {
//         x  = x*a;
//     }
//     return x;
// }
// int main(){
//     int a,b;
//     printf("Enter the base: ");
//     scanf("%d", &a);
//     printf("Enter the power: ");
//     scanf("%d", &b);
//     printf("%d",power(a,b));
//     return 0;
// }
//Using recursion
#include<stdio.h>
int power(int a, int b){
    if (b==0)
    {
        return 1;
    }
    else
    {
        return 2*power(a,b-1);
    }
    
}
int main(){
    int a,b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    printf("%d",power(a,b));
    return 0;
}