#ifndef HEADERBOY_H
#define HEADERBOY_H

typedef enum {
  DIGIT,
  IDENTIFIER,
  KEYWORD,
  ETC
} TokenType;

typedef struct {
  char *str;
  TokenType type;
} Token;

typedef struct {
  Token *token;
  int size;
  int top;
} Stack;

Stack* initStack(int size);
Token* popToken(Stack *stack);
void pushStack(Stack *stack, Token token);
void printStack(Stack *stack);
void freeStack(Stack *stack);

void lexer(char c);

#endif
