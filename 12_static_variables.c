#include <stdio.h>

void number(int n) {
    int num = 5;
    printf("num + n is is %d\n", num + n);
    num += 3; // this gets ignored
}

void tally(){
    // static variables are initialized only once
    // and retain their value between function calls
    static int count; // Initialized to 0
    printf("count is %d\n", count);
    count++;
}

int main() {

    number(5); // 10
    number(5); // 10

    tally(); // 0
    tally(); // 1
    tally(); // 2

    return 0;
}
