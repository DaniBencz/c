#include <stdio.h>

int main() {

  double number1 = 12.45;
  float number2 = 10.9f;

  printf("%.2lf\n", number1);
  printf("%f\n", number2);  

  char character = 'z';
  printf("%c \n", character);
  printf("%d\n", character);

  int age;
  double number;

  printf("int size = %zu\n", sizeof (age));
  printf("double size = %zu\n", sizeof(number));

  return 0;
}
