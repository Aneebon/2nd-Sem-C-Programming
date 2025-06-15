#include <stdio.h>
#include <string.h>

// Define the structure
struct Books {
    char title[50];
    int book_id;
};

int main() {
    struct Books Book1;  // Declare Book1 of type Books
    struct Books Book2;  // Declare Book2 of type Books

    // Book1 specification
    strcpy(Book1.title, "C Programming");
    Book1.book_id = 6495407;

    // Book2 specification
    strcpy(Book2.title, "Telecom Billing");
    Book2.book_id = 6495700;

    // Print Book1 information
    printf("Book 1 title: %s\n", Book1.title);
    printf("Book 1 book_id: %d\n", Book1.book_id);

    // Print Book2 information
    printf("Book 2 title: %s\n", Book2.title);
    printf("Book 2 book_id: %d\n", Book2.book_id);

    return 0;
}  