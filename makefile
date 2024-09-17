CC = gcc

all: main.o lexer.o
	@echo "begin program"
	${CC} -o main ./build/main.o ./build/lexer.o
	./main

main.o: main.c
	${CC} -c -o ./build/main.o main.c 

lexer.o: lexer.c
	${CC} -c -o ./build/lexer.o lexer.c 

clean:
	@echo "cleaning build folder"
ifeq ($(OS),Windows_NT)
	powershell.exe -Command "Remove-Item -Recurse -Force ./build/*"
else
	rm ./build/*
endif
