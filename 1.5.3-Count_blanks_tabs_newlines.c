#include <stdio.h>

/* count blanks, tabs and newlines */

int main() {
  int c;
  int blanks, tabs, newlines;
  
  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newlines;
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
  }
  printf("\n%d-blanks\n%d-tabs\n%d-newlines\n",blanks, tabs, newlines);
}
