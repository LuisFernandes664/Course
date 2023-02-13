#include <stdio.h>

int count_divisible(int arr[], int size, int x) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % x == 0) {
      count++;
    }
  }
  return count;
}

int main(void) {
  int arr[] = {2, 4, 6, 8, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int x = 2;

  int count = count_divisible(arr, size, x);
  printf("Number of elements divisible by %d: %d\n", x, count);

  return 0;
}
