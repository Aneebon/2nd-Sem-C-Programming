#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int *a;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) { // Check if allocation was successful
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // or *(a + i)
        sum += a[i]; // Calculate the sum
    }

    // Display the sum
    printf("The sum of the elements is: %d\n", sum);

    // Free the dynamically allocated memory
    free(a);

    return 0;
}   