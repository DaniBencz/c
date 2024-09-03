#include <stdio.h>

int *squareNumber(int *number);
int *getArray();

int main()
{
    int number = 2;
    printf("Square of %d is ", number);
    int *square = squareNumber(&number);
    printf("%d\n", *square);
    printf("Location of square is %p\n\n", square);

    // In above example it makes no sense returning the same pointer,
    // as the value in memory address of 'number' is updated:
    printf("Value of number is %d\n", number);       // 4
    printf("Location of number is %p\n\n", &number); // same as 'square'

    int *arr = getArray();
    printf("Second item of arr is %d\n", arr[1]); // 2

    return 0;
}

// function returns the same pointer it got in the argument
int *squareNumber(int *number)
{
    *number = *number * *number;
    return number;
}

// function returns a new pointer
int *getArray()
{
    // if variable is local (not static), its memory is deallocated after function run
    // thus the pointer will break
    static int arr[] = {1, 2};
    return arr;
}
