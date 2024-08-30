#include <stdio.h>

// function prototype
int square(int x);

int main() {
    int x = 5;
    int res = square(x);

    printf("The square of %d is %d\n", x, res);
    return 0;
}

int square(int x) {
    return x * x;
}

