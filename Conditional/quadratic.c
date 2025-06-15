#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,real_part,img_part,discriminant,r1,r2;
    printf("Enter the values of a,b and c: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    discriminant = (b*b)-(4*a*c);
    if (discriminant>0)
    {
        r1 = (-b+sqrt(discriminant))/2*a;
        r2 = (-b-sqrt(discriminant))/2*a;
        printf("The roots are real and equal and the roots are: %0.2lf and %0.2lf", r1,r2);
    }
    else if (discriminant==0)
    {
        r1 = r2 = -b/(2*a);
        printf("The roots are real and equal and the roots are: %0.2lf and %0.2lf", r1,r2);
    }
    else
    {
        real_part = -b/(2*a);
        img_part = sqrt(-discriminant)/ 2*a;
        printf("The roots are imaginary and the roots are: %0.2lf+%0.2lf i and  %0.2lf - %0.2lfi\n", real_part, img_part, real_part, img_part);
    }
    return 0;
    
    
}