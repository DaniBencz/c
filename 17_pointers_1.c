#include <stdio.h>

// *ptr : value stored in the memory address that ptr is pointing to
// &var : memory address of var

int main()
{
    int var = 10;
    printf("value of var is %d\n", var); // 10
    // format specifier %p for 'pointer'
    printf("memory address of var is %p\n", &var); // 0x16cf46ea8

    // declaring a pointer
    int *ptr;
    ptr = &var;
    printf("\nvalue is %d in memory address %p\n", *ptr, ptr); // 0x16cf46ea8

    // changing the value of var using the pointer
    *ptr = 20;
    printf("value of var is now %d\n", var); // 20

    return 0;
}
