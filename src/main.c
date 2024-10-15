#include "headerboy.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MaxString 2
#define TokenArraysize 100

int main(int argc, char *argv[]) {
  FILE *fptr;
  int ch;
  fptr = fopen("randomList.pc", "r");
  while (1) {
    ch = fgetc(fptr);

    if (ch == EOF) { // EOF == -1
      break;
    }

    lexer(ch);
  }
  fclose(fptr);
  return EXIT_SUCCESS;
}
