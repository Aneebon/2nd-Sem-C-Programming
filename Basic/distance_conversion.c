#include<stdio.h>
int main(){
    int total,km,m;
    printf("Enter distance in metres: ");
    scanf("%d", &total);
    km = total/1000;
    m = total%1000;
    printf("%d meter = %d Km and %d meters", total, km, m);
    return 0;
}