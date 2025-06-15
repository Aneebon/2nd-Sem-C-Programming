#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n;
    int *a;

    printf("Number of elements to be entered: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' integers
    a = (int*)calloc(n, sizeof(int));

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Input numbers
    }

    printf("The numbers entered are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print numbers
    }

    // Free the allocated memory
    free(a);
    return 0;
}       