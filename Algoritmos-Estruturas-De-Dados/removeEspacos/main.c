#include <stdio.h>
#include <string.h>

int remove_spaces(char *s) {
  int count = 0;
  int i,  j;
  int n = strlen(s);
  for (i = 0, j = 0; i < n; i++) {
    if (s[i] != ' ') {
      s[j++] = s[i];
    } else {
      count++;
    }
  }
  s[j] = '\0';
  return count;
}

int main(void) {
  char s[] = "Hello World";
  int count = remove_spaces(s);
  printf("String without spaces: %s\n", s);
  printf("Number of spaces removed: %d\n", count);
  return 0;
}
