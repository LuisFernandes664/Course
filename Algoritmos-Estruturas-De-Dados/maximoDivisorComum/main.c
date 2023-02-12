#include <stdio.h>

int gcd(int x, int y) {
  int r;
  while (y != 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(void) {
  int a, b;

  printf("Enter two positive integers: ");
  scanf("%d%d", &a, &b);

  printf("The gcd of %d and %d is: %d\n", a, b, gcd(a, b));

  getchar();
}









