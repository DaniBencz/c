#include <stdio.h>

int main() {

  int age = -4;
  if (age > 120 || age < 0) {
    printf("Invalid Age\n");
  }
  else if (age >= 18) {
    printf("You are eligible to vote\n");
  }
  else {
    printf("Sorry, you are not eligible to vote\n");
  }

  int a = 3;
  int b = a == 2 ? a : 4;
  printf("b is %d\n", b);

  return 0;
}
