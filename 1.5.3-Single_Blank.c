#include <stdio.h>

/* Copy input to output while replacing each string f one or more blanks by a single blank */

int main () {
  int c;

  while ((c = getchar()) != EOF) {
      if ( c == '\t' || c == '\n' || c == ' ')
	putchar(' ');
      putchar(c);
  }
}
