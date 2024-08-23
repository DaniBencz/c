#include <stdio.h>

int main() {

  int count = 1;
  while (count < 5) {
    printf("Count = %d \n", count);
    count = count + 1;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  return 0;
}
