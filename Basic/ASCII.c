#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer (0-128): ");
    scanf("%d", &num);
    if (num < 0 || num > 128) {
        printf("Invalid input! Please enter a number between 0 and 128.\n");
    } else {
        printf("The ASCII character for %d is: %c\n", num, num);
    }
    
    return 0;
}
