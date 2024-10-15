#include "headerboy.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Stack *initStack(int size) {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  if (stack == NULL) {
    printf("Memory allocation failed\n");
    return NULL;
  }
  stack->token = (Token *)malloc(size * sizeof(Token));
  if (stack->token == NULL) {
    printf("Memory allocation failed\n");
    return NULL;
  }
  stack->size = size;
  stack->top = -1;
  return stack;
}

void freeStack(Stack *stack) {
  free(stack->token);
  free(stack);
}

void pushStack(Stack *stack, Token token) {
  if (stack->top + 1 == stack->size) {
    stack->size = stack->size * 2;
    stack->token = realloc(stack->token, stack->size*sizeof(Token));
    if (stack->token == NULL) {
      printf("Memory allocation failed\n");
      exit(0);
    }
  }

  stack->top++;
  stack->token[stack->top] = token;
}

void printStack(Stack *stack) {
  for (int i=0; i<stack->top+1; i++) {
    printf("%s\n", stack->token[i].str);
  }
}

Token* popToken(Stack *stack){
  if (stack->top >= 0) {
    return &stack->token[stack->top--];
  }
  return NULL;
}
