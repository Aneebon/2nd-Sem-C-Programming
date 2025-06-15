#include <stdio.h>

void countFrequency(int arr[], int size) {
    int visited[size]; // to mark visited elements

    for (int i = 0; i < size; i++) {
        // Skip if already counted
        if (visited[i] == 1)
            continue;

        int count = 1; // count current element

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // mark as counted
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Frequencies:\n");
    countFrequency(arr, size);

    return 0;
}