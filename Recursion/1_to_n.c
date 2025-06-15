//Print 1 to n using 2 parameters
#include<stdio.h>
void increasing(int x, int y){
    if (x>y)
    {
        return;
    }
    else
    {
        printf("%d ", x);
    }
    increasing(x+1, y);
    return;
    
}
int main(){
    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    increasing(1,y);
    return 0;
}