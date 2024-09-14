#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    float marks;
} s1; // instance of struct Student

// typedef
typedef struct Automobile
{
    char make[20];
    char model[20];
    int year;
    float price;
} car;

int main()
{
    // struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.marks = 78.5;

    printf("Id: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    struct Student s2 = {.id = 2, .name = "Doe", .marks = 72.7};
    struct Student s3 = {3, "Jill", 89.5};

    struct Student *s4 = &s3;
    // printf("\nId: %d\n", s4.id); // error: s4 is a pointer
    printf("\nId: %d\n", s4->id);
    printf("Name: %s\n", s4->name);
    printf("Marks: %.2f\n", s4->marks);

    // typedef allows using an alias, instead of typing 'struct Automobile' every time
    car c1 = {"Toyota", "Corolla", 2018, 25000.0};
    printf("\nMake: %s\n", c1.make);

    return 0;
}
