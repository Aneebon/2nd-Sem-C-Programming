#include <stdio.h>

int main() {
    int num1, num2, a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    gcd = a;  
    lcm = (num1 * num2) / gcd;
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
