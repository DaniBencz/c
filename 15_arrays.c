#include <stdio.h>

int getArray();

int main()
{
    int arr[5];
    // or
    // int arr[] = {1, 2, 3, 4, 5};

    size_t array_size = sizeof(arr);
    printf("Array size in bytes is %lu\n", array_size); // 20

    size_t element_size = sizeof(arr[0]);
    printf("Size of first element in bytes is %lu\n", element_size); // 4

    // determine length of the array
    int length = array_size / element_size;
    printf("Array length is %d\n", length);

    printf("Enter input values:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nValues are:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
        // different syntax, same result
        printf("%d\n\n", *(arr + i));
    }

    // getArray();

    return 0;
}

// will not work, functions cannot return arrays
// int getArray() {
//     int arr[] = {1, 2};
//     return arr;
// }
