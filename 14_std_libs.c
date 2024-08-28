#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {

    // math
    int src = 25;
    double root = sqrt(src);  // 5
    printf("square root of %d is %.1lf\n", src, root);

    double square = pow(root, root); // 3125
    printf("square of %0.lf is %0.lf\n", root, square);

    // ctype
    char low = 'a';
    char cap = toupper(low);
    printf("upper case '%c' is '%c'\n", low, cap);

    return 0;
}
