#include <stdio.h>
#include <string.h>

int main() {
    // hello is a character array, hence the []
    // last character is always '\0', not counted in length
    char first_name[20];
    printf("Enter your first name: ");

    // no need to use &, as first_name is already a pointer
    // scanf() reads until a whitespace is encountered
    scanf("%s", first_name);
    printf("Hello %s\n", first_name);

    // scanf() doesn't consume the newline character left in the input buffer.
    // This newline character is read by the next fgets() call.
    // Since fgets() reads until a newline is encountered (not until a whitespace),
    // it reads an empty string.
    // To clear the input buffer, we can use the following code:
    int c; // ASCII value of character consumed
    while ((c = getchar()) != '\n' && c != EOF);

    char name[50];
    printf("Enter your full name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s\n", name);

    return 0;
}
