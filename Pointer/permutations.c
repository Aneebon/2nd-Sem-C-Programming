#include <stdio.h>
#include <string.h>

// Function to swap characters using pointers
void changePosition(char *ch1, char *ch2) {
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

// Recursive function to generate permutations
void charPermu(char *str, int start, int end) {
    int i;
    if (start == end) {
        printf("%s\n", str); // Print the permutation when start equals end
    } else {
        for (i = start; i <= end; i++) {
            changePosition((str + start), (str + i)); // Swap characters
            charPermu(str, start + 1, end); // Recursively generate permutations for the rest of the string
            changePosition((str + start), (str + i)); // Backtrack to restore the original string
        }
    }
}

// Main function
int main() {
    char str[] = "abc"; // Input string
    printf("Pointer: Generate permutations of a given string:\n");
    printf("-------------------------------------------------\n");
    printf("The permutations of the string are:\n");
    
    int n = strlen(str); // Get the length of the string
    charPermu(str, 0, n - 1); // Call the function to generate permutations
    
    return 0;
}
