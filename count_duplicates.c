#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 5, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicates = countDuplicates(arr, size);
    printf("Number of duplicate elements: %d\n", duplicates);
    return 0;
}