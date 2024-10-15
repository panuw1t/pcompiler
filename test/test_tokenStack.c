#include <stdlib.h>
#include <stdio.h>
#include "../src/headerboy.h"
#define TokenArraysize 100

int main(int argc, char *argv[])
{
  Token token = {"doggo", IDENTIFIER};
  Token token2 = {"boy", IDENTIFIER};
  Token token3 = {"cat", IDENTIFIER};
  Token token4 = {"dog", IDENTIFIER};
  Stack *stack = initStack(3);
  pushStack(stack, token);
  pushStack(stack, token2);
  pushStack(stack, token3);
  pushStack(stack, token4);
  printStack(stack);
  printf("after that ------------\n");
  popToken(stack);
  popToken(stack);
  printStack(stack);
  printf("%d\n", stack->top);
  printf("%d\n", stack->size);
  freeStack(stack);
  printf("Test passed\n");
  return EXIT_SUCCESS;
}
