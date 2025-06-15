#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    while (i<101)
    {
        printf("%d ", i);
        i = i=i+1;
    }
    
    return 0;
}
