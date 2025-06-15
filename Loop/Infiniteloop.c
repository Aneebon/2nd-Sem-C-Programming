#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    while (i<100)
    {
        printf("%d ", i);
        i = i=i-1;
    }
    
    return 0;
}
//Here always i becomes less than 100 so it becomes infinite loop.