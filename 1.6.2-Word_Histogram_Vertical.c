#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

/* print a histogram of the lengths of words in its input vertically */

int main() {
  int c, state;
  int nword;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ' || (c >= '0' && c <= '9')) {
      if (state == IN) {
	++nword;
	state = OUT;
      }
    }
