#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* print a histogram of the length of words in its input */

int main() {
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ' || (c >= '0' && c <= '9')) {
      if (state == IN) {
	putchar('\n');
	state = OUT;
      }
    }
    else {
	putchar('-');
	state = IN;
    }
  }
}
	
