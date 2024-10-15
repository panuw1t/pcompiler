CC = gcc

all: main.o lexer.o tokenStack.o
	@echo "begin program"
	${CC} -o main ./build/main.o ./build/lexer.o ./build/tokenStack.o
	./main

main.o: src/main.c
	${CC} -c -o ./build/main.o src/main.c 

lexer.o: src/lexer.c
	${CC} -c -o ./build/lexer.o src/lexer.c 

tokenStack.o: src/tokenStack.c
	${CC} -c -o ./build/tokenStack.o src/tokenStack.c 

test1: test/test_tokenStack.c tokenStack.o
	${CC} -o ./build/test_tokenStack test/test_tokenStack.c ./build/tokenStack.o 
	./build/test_tokenStack 

clean:
	@echo "cleaning build folder"
ifeq ($(OS),Windows_NT)
	powershell.exe -Command "Remove-Item -Recurse -Force ./build/*"
else
	rm ./build/*
endif
