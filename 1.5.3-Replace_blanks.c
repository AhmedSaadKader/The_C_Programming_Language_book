#include <stdio.h>

/* copy input to output, replacing each tab by \t, each backspace by \b, and each backslash by \\. */

int main () {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    if (c == '\b')
      printf("\\b");
    if (c == '\\')
      printf("\\\\");
    putchar(c);
  }
}
	
