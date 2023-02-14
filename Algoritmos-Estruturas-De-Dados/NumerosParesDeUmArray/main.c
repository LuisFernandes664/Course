#include <stdio.h>

int countEvenNumbers(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  return count;
}

int main(void) {
  int arr[100], size, count;
  
  printf("Enter size of the array: ");
  scanf("%d", &size);
  
  printf("Enter elements in the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  
  count = countEvenNumbers(arr, size);
  printf("Number of even numbers in the array: %d\n", count);
  
  return 0;
}
