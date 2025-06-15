#include<stdio.h>

void PRIME(int n) { 
    if (n <= 1) {    
        printf("Not Prime");
        return;
    }
    for (int i = 2; i*i <= n; i++) {  
        if (n % i == 0) {
            printf("Not Prime");
            return;  
        }
    }
    printf("Prime");  
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    PRIME(a);         
    return 0;
}
