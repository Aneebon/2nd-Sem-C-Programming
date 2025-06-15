#include<stdio.h>
int main(){
    int m,p,c;
    printf("Enter marks in maths: ");
    scanf("%d", &m);
    printf("Enter marks in physics: ");
    scanf("%d", &p);
    printf("Enter marks in chemistry: ");
    scanf("%d", &c);
    int total_marks = m+p+c;
    int total_mp = m+p;
    if (m>=65 && p>=55 && c>=50 || total_marks>=190 || total_mp>=140)
    {
        printf("The candidate is eligible for admission");
    }
    else
    {
        printf("The candidate is not eligible for admission");
    }
    
    return 0;
}