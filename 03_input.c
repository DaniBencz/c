#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    return 0;
}
