#include <stdio.h>

int main() {
    // implicit type conversion
    char a = '5'; // ASCI 53
    int b = 5;
    int res = a +b;
    printf("a+b = %d\n", res); // 58

    // explicit typ conversion
    double x = 5.43;
    int y = 5;
    int result = (int)x + y;
    printf("x+y = %d\n", result);

    return 0;
}
