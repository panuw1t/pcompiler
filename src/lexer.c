#include "headerboy.h"

int checkInt(char c);

int checkTerminate(char c);

void lexer(char c) {

}

int checkTerminate(char c) {
  if (c == ' ') {
    return 1;
  }
  if (c == ';') {
    return 1;
  }
  if (c == '\n') {
    return 1;
  }
  if (c == '\t') {
    return 1;
  }
  return 0;
}

int checkInt(char c) {
  if (c == '9') {
    return 1;
  }
  if (c == '8') {
    return 1;
  }
  if (c == '7') {
    return 1;
  }
  if (c == '6') {
    return 1;
  }
  if (c == '5') {
    return 1;
  }
  if (c == '4') {
    return 1;
  }
  if (c == '3') {
    return 1;
  }
  if (c == '2') {
    return 1;
  }
  if (c == '1') {
    return 1;
  }
  if (c == '0') {
    return 1;
  }
  return 0;
}
