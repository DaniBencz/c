#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
} student[3]; // array of struct Student

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter id, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &student[i].id, student[i].name, &student[i].marks);
    }

    printf("\nStudent details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Id: %d\n", student[i].id);
        printf("Name: %s\n", student[i].name);
        printf("Marks: %.2f\n", student[i].marks);
        printf("\n");
    }

    return 0;
}
