#include <stdio.h>

int binary_to_decimal(char b[10], int n) {
  int decimal = 0;
  int base = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (b[i] == '1') {
      decimal += base;
    }
    base *= 2;
  }
  return decimal;
}

int main(void) {
  char b[] = "1101";
  int n = strlen(b);
  int decimal = binary_to_decimal(b, n);
  printf("Binary: %s\n", b);
  printf("Decimal: %d\n", decimal);
  return 0;
}
