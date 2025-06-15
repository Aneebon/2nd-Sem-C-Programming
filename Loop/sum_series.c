#include <stdio.h>
int main()
{
 int n, i, j, sum = 0, l;
 printf("Enter the value of n: ");
 scanf("%d", &n);

 for (i = 1; i <= n; i++)
{
 l = 0;
 for (j = 1; j <= i; j++)
{
 l += j;
}
 sum += l;
}
 printf("Sum of the series: %d\n", sum);

 return 0;
}