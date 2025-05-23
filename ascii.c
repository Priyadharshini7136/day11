
#include <stdio.h>
int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);

  int asciiValue = c;
  printf("The ASCII value of '%c' is %d\n", c, asciiValue);
  return 0;
}
