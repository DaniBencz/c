#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // array name is a pointer to the first element of the array
    printf("memory address of arr is %p\n", arr); // 0x16d00ee90

    // &arr is the memory address of the first element of the array
    printf("memory address of arr is %p\n\n", &arr); // same result

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%p = %d\n", &arr[i], arr[i]);

        // different syntax, same result
        printf("%p = %d\n", arr + i, arr[i]);
        printf("%p = %d\n\n", arr + i, *(arr + i));
    }

    *arr = 6;
    printf("First element of array is now %d\n", arr[0]);

    *(arr + 1) = 7;
    printf("Second element of array is now %d\n", arr[1]);

    return 0;
}
