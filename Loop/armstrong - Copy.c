#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, temp, digits = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    for (temp = num; temp != 0; temp /= 10) {
        digits++;
    }
    temp = num;
    for (temp = num; temp != 0; temp /= 10) {
        int extract = temp % 10;
        result += pow(extract, digits);
    }
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
