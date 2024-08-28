#include <stdio.h>

int sum(int n);

int main() {
    int input;
    printf("Enter a positive integer: \n");
    scanf("%d", &input);

    int res = sum(input);
    printf("res is %d\n", res);
    return 0;
}

int sum(int n) {
    if (n != 0) return n + sum(n - 1);
    return n;
};
