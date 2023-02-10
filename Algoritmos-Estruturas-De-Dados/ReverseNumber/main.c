#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, reversed = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  printf("Reversed number: %d\n", reversed);
  printf("Pressione Enter para continuar...");
  getchar();
  return 0;
}
