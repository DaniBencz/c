#include <stdio.h>
#include <string.h>

int main() {
    char hello[] = "Hello World!";

    // strlen()
    // printf("length is %zu\n", strlen(hello));
    // or casting return value to integer by
    printf("length of '%s' is %d\n", hello, (int)strlen(hello));

    // strcpy()
    // create a destination char-array of same size as hello
    char dest[strlen(hello)];
    strcpy(dest, hello);
    printf("copied string is '%s'\n", dest);

    // strcat()
    char text[strlen(hello) + strlen(" Goodbye!")];
    strcpy(text, hello);
    strcat(text, " Goodbye!");
    printf("concatenated string is '%s'\n", text);

    // strcmp()
    char str1[] = "Hello";
    char str2[] = "Hello";
    if (strcmp(str1, str2) == 0) {
        printf("'%s' and '%s' are equal\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not equal\n", str1, str2);
    }

    return 0;
}
