//Print all the even numbers from 1 to 100
#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%2!=0)
        {
            continue;
        }
        printf("%d ", i);
    }
    
    return 0;
}
