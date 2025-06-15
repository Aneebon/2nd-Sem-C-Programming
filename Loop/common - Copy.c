#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    printf("Common elements: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already printed
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 2};
    int arr2[] = {2, 4, 6, 2, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
