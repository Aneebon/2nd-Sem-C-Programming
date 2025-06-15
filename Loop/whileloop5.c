#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x= 4,y,z;
    y=--x;
    z=x--;
    printf("\n%d %d %d", x,y,z);
    return 0;
}
/* "--x" means that first reduce the value of x and that reduced value will be print for y but x value will be reduced by -1.
"x--" means x=x-1 here x is the initial x. But after performing this operation value of x will be reduced by -1 from the reduced value.*/