#include <stdio.h>

// function prototype
int square(int x);

int main() {
    int x = 5;

    printf("The square of %d is %d\n", x, square(x));
    return 0;
}

int square(int x) {
    return x * x;
}

