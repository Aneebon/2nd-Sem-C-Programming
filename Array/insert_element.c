#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    if(pos > n+1 || pos <= 0) {
        printf("Invalid position! Please enter position between 1 and %d", n+1);
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &value);

        for(i = n; i >= pos; i--) {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = value;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}