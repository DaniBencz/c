#include <stdio.h>

enum Weekday
{
    Monday,    // 0
    Tuesday,   // 1
    Wednesday, // etc. Internal Constants
};

enum Size
{
    Small = 27,
    Medium = 31,
    Large = 35,
    XLarge = 40,
} shirt; // instance of enum Size

int main()
{
    enum Weekday today = Wednesday;
    printf("Today is %d\n", today); // 2

    shirt = Medium;
    printf("Size is %d\n", shirt); // 31

    return 0;
}
