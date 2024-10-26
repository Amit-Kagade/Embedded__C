/*Write a function to initialize a Book struct with a title and publication date. Then print the details 
of the book in main*/

#include <stdio.h>
#include <string.h>

// Define the Book struct
struct Book {
    char title[100];
    int publicationYear;
};

// Function to initialize the Book struct
void initializeBook(struct Book* b, const char* title, int year) {
    strcpy(b->title, title);  // Copy the title into the Book's title field
    b->publicationYear = year; // Set the publication year
}

// Function to print the details of the Book
void printBookDetails(struct Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Publication Year: %d\n", b.publicationYear);
}

int main() {
    // Declare a book variable
    struct Book myBook;

    // Initialize the book with a title and publication year
    initializeBook(&myBook, "The C Programming Language", 1978);

    // Print the details of the book
    printBookDetails(myBook);

    return 0;
}
