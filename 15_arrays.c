#include <stdio.h>

int getArray();

int main() {

    // either
    int arr[5];
    // or
    // int arr[] = {1, 2, 3, 4, 5};

    printf("Enter input values:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nValues are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    // getArray();

    return 0;
}

int getInt() {
    return 2;
}

// will not work, functions cannot return arrays
// int getArray() {
//     int arr[] = {1, 2};
//     return arr;
// }
