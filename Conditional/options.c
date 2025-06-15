#include<stdio.h>
int main(){
    int n1, n2,choice;
    float result;
    printf("Enter num-1: ");
    scanf("%d", &n1);
    printf("Enter num-2: ");
    scanf("%d", &n2);
    printf("\n Menu: ");
    printf("1. Add \n");
    printf("2. Substract \n");
    printf("3. Multiply \n");
    printf("4. Division \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = n1 + n2;
        printf("%f",result);
        break;
    case 2:
        result = n1-n2;
        printf("%f",result);
        break;
    case 3:
        result = n1*n2;
        printf("%0.2f",result);
        break;
    case 4:
        result = n1/n2;
        printf("%0.2f",result);
        break;
}
return 0;
}